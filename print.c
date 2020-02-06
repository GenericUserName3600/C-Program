//
// Created by sec26 on 09/12/2019.
#include "definitions.h"

/*
 * Function to print out the member node in the tree.
 * Arguments: node pointer.
 */
void print_member_node(member_node_ptr nodePtr){
    //checks if the node to the left is null
    if(nodePtr -> left != NULL){
        //Moves the node over one to the left and calls the function again.
        print_member_node((member_node_ptr) nodePtr->left);
    }

    //Prints out all information contained within the node the system is currently on.
    printf("\n Family name: %s \n Personal Name: %s \n Email Address: %s \n Membership ID: %i \n Class Name: %s \n Boat Name: %s \n ",
            nodePtr->family_Name, nodePtr->personal_Name,
            nodePtr->email_Address, nodePtr->membership, nodePtr->class_Name,
            nodePtr->name_of_boat);

    //checks if the node to the right is null.
    if(nodePtr->right != NULL){
        //moves the node over one to the right, and calls the function again.
        print_member_node((member_node_ptr) nodePtr->right);
    }
}

/*
 * Function simply calls the function above.
 */
void print_memberships(member_node_ptr nodePtr){
    print_member_node(nodePtr);
}


