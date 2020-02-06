//
// Created by sec26 on 09/12/2019.
//

#include "definitions.h"
/*
 * Function for writing to the file,
 * Arguments: All the information regarding new member, and the name of the file.
 */
void writing_to_file(char * filename, char * name, char * personal_name, char * email_address, int id, char * boat_class_name, char * boat_name){
    FILE * file;

    //Opens the file in append mode, allows the new members to be added at the end of the file.
    file = fopen(filename, "a");
    //Checks if the file is null. is so, there's a error.
    if(file == NULL){
        printf(" File not read");
    }

    //Appends the new member information to the end of the file
    fprintf(file, "%s\n", name);
    fprintf(file, "%s\n", personal_name);
    fprintf(file, "%d\n", id);


    //Appends the new member information to the end of the file.
    fprintf(file, "%s\n", email_address);
    fprintf(file, "%s\n", boat_class_name);
    fprintf(file, "%s", boat_name);

    //Closes the file, after it has been used.

    printf("! Warning - The new member will be added into the system after the next restart !");
    printf("\nFor immediate use or display of this member, restart the program.");
    fclose(file);

}

/*
 * Adds a new node to the binary search tree. Works by comparing the two family names,
 * and added the one which comes alphabetically first.
 * Arguments: current node location, new node
 */
void add_member_node(member_node_ptr current_location, member_node_ptr new1){

    //Using strcmp to compare the family name of the current and new node.
    if (strcmp(new1 -> family_Name, current_location -> family_Name) > 0){
        //if it is more than 0, it then checks if the right node is NULL.
        if (current_location -> right == NULL){
            //If it is NULL, it sets the current node to that new node,
            // and calls the function again.
            current_location -> right = (struct members_right *) new1;
        }
        else {
            //otherwise, it calls add node function, and updates the current location
            add_member_node((member_node_ptr) current_location->right, new1);
        }
    }
    else {
        // if it is less then 0, it then checks if the left node is NULL.
        if (current_location -> left == NULL){
            //if it is NULL, it then sets the current node to the new node,
            // and calls the function again
            current_location -> left = (struct members_left *) new1;
        }
        else {
            //otherwise, it calls add node function, and updates the current location
            add_member_node((member_node_ptr) current_location->left, new1);
        }
    }
}
/*
 * Function for reading the membership nodes in the tree.
 * Arguments: Filename
 */
member_node_ptr read_membership_node(FILE * file){
    int scan_status;
    member_node * temp_member_node;

    // Dynamic memory request code.
    temp_member_node = calloc(1, sizeof(member_node));

    //if statement, checking family names in the tree already.

    //Scan statement, scans in all the information from the text file, following the format below.
    scan_status = fscanf(file, " %s %[^\n] %i %[^\n] %s %[^\n]",
                         temp_member_node->family_Name, temp_member_node->personal_Name,
                         &temp_member_node->membership, temp_member_node->email_Address,
                         temp_member_node->class_Name, temp_member_node->name_of_boat);
    //checks for end of file.
    if (scan_status == EOF){
        //Frees node, if the end of file has been reached and then returns NUll.
        free(temp_member_node);
        return NULL;
    }else{
        //Returns the member node otherwise.
        return temp_member_node;
    }

}
/*
 * Function for getting the membership nodes in the tree.
 * Arguments: Filename
 */
member_node_ptr get_member_table(char * filename){
    FILE * file;
    //Declaring pointers for the top of the tree and the temp node.
    member_node_ptr top_of_tree_ptr;
    member_node_ptr temp_node_ptr;

    //opens the file in read only mode.
    file = fopen(filename, "r");
    //checks if the file is NULL.
     if(file == NULL)
         printf(" File not read");

     //Checks if the file is not NULL.
    if (file != NULL) {

        //Function call, checks the top node of the tree
        top_of_tree_ptr = read_membership_node(file);

        //while continuously true condition, uses breaks to exit.
        while (1) {

            //Reads in the nodes, and then adds them in through functional calls.
            temp_node_ptr = read_membership_node(file);
            //checks if the temp node is NULL.
            if (temp_node_ptr == NULL) {
                //If NULL, break.
                break;
            }
            //add node to the tree.
            add_member_node(top_of_tree_ptr, temp_node_ptr);
        }
    }
    //Failure statement, debugging mostly.
    else {
        printf("Failure in opening the membership file.");
        return NULL;
    }
    //closes the file, returns the top node.
    fclose(file);
    return top_of_tree_ptr;
}
