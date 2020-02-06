//
// Created by sec26 on 10/12/2019.
//
#include "definitions.h"

/*
 * Function responsible for searching for the ID number inputted by the user in the main menu
 * Arguments: Node pointer, id number.
 */
void search_ID_function(member_node_ptr nodePtr, int id){
    // Checks if the left node is not null
    if (nodePtr -> left != NULL){
        //calls the function again, but moving the pointer one more to the left.
        search_ID_function((member_node_ptr) nodePtr->left, id);
    }

    // checks if the node has the same id value as the inputted id value,
    if (id == nodePtr->membership){
        //prints the node out through another function, and passing the current node into it.
        print_single_node(nodePtr);
    }

    // checks if the right node is not null.
    if(nodePtr -> right != NULL){
        // calls this function again, but moves the pointer one to the right.
        search_ID_function((member_node_ptr) nodePtr->right, id);
    }
}

/*
 * Function responsible for searching for the boat name inputted by the user in the main menu
 * Arguments: Node pointer, boat name.
 */
void search_boat_function(member_node_ptr nodePtr, char * boat_name){
    // Checks if the left node is not null
    if (nodePtr -> left != NULL){
        //calls the function again, but moving the pointer one more to the left.
        search_ID_function((member_node_ptr) nodePtr->left, *boat_name);

        // checks if the node has the same boat name as the inputted boat name,
        if (strcmp(boat_name, nodePtr->class_Name) == 0){
            //prints the node out through another function, and passing the current node into it.
            print_single_node(nodePtr);
        }
        // calls this function again, but moves the pointer one to the right.
        search_ID_function((member_node_ptr) nodePtr->right, *boat_name);
    }
}

/*
 * Prints out a single node, used for the search ID function
 */
void print_single_node(member_node_ptr nodePtr){
    printf("\n Family name: %s \n Personal Name: %s \n Email Address: %s \n Membership ID: %i \n Class Name: %s \n Boat Name: %s \n ",
           nodePtr->family_Name, nodePtr->personal_Name,
           nodePtr->email_Address, nodePtr->membership, nodePtr->class_Name,
           nodePtr->name_of_boat);
}