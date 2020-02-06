//
// Created by sec26 on 09/12/2019.
//

#ifndef C_ASSIGNMENT_3_DEFINITIONS_H
#define C_ASSIGNMENT_3_DEFINITIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct members{
    char family_Name[21];
    char personal_Name[80];
    char email_Address[50];

    char class_Name[30];
    char name_of_boat[30];
    int membership;

    struct members_left *left;
    struct members_right *right;

}member_node;

typedef member_node * member_node_ptr;


member_node_ptr read_membership_node(FILE * file);

void add_member_node(member_node_ptr current_location, member_node_ptr new1);

member_node_ptr get_member_table(char * filename);
void print_member_node(member_node_ptr nodePtr);
void print_memberships(member_node_ptr nodePtr);
void print_single_node(member_node_ptr nodePtr);

void search_ID_function(member_node_ptr nodePtr, int id);
void search_boat_function(member_node_ptr nodePtr, char * boat_name);

void writing_to_file(char * file, char * name, char * personal_name, char * email_address, int id, char * boat_class_name, char * boat_name);

#endif //C_ASSIGNMENT_3_DEFINITIONS_H
