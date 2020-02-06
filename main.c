#include "definitions.h"

/*
 * Code created and designed using case study two as a template / guide, provided from blackboard.
 * As a result code may look similar to the case study, however, i never copied it word for word.
 */

int main() {
    // Variable Declaration.

    char file_directory_name[200], boat_input[10]; // Inputs for searching.
    int menu_input = 1, print_menu_input = 1; // Menu inputting
    int id = 0; // Input for searching
    member_node_ptr  top_ptr; // Node Declaring.

    //Arrays to store the inputs given when a user is entering a new member.
    char name[10], personal_name[40], email_address[30], boat_class_name[30], boat_name[30];
    int member_ID;

    //Beginning of the program.
    printf("Please insert the name of the directory which the file is located in\n");
    scanf(" %[^\n]", file_directory_name);

    // Function that reads in the member information from the file.
    top_ptr = get_member_table(file_directory_name);

    while (menu_input != 3){
        printf("\n ---- Main Menu ---");
        printf("\n Option 1 - Print Options");
        printf("\n Option 2 - Input a new member");
        printf("\n Option 3 - Exit application without saving \n");

        scanf(" %d", &menu_input);

        switch(menu_input){
            // Switch statement that focuses on the main menu,
            // and the options the user can select from it

            default:
                //Default error handling, in case a option isn't selected.
                printf("Invalid input, please try again");
                break;
            case 1:
                while(print_menu_input != 4){
                    //Printing the search tree menu, allows the whole tree, single members or list of members to be printed out
                    //Based on the input the user selects.

                    printf("\n ---- Print Menu ----");
                    printf("\n Option 1 - Print all members in the program currently");
                    printf("\n Option 2 - Print a single member based from their ID Number");
                    printf("\n Option 3 - Print a list of members of which own a boat of a given class");
                    printf("\n Option 4 - Return to main menu \n ");

                    scanf("%i", &print_menu_input);
                    switch(print_menu_input){
                        default:
                            //Default error handling, in case a option isn't selected.
                            printf("Invalid input, please try again");
                            break;

                        case 1:
                            //Function call, prints all the members in the tree.
                            print_memberships(top_ptr);
                            break;

                        case 2:
                            //Function call, prints a single member based on their ID list.
                            printf("Please enter a ID number of a member to find: ");
                            scanf("%d", &id);
                            search_ID_function(top_ptr, id);
                            break;

                        case 3:
                            //Function call, prints all members relating to a type of boat class.
                            printf("Please enter a boat class: ");
                            scanf(" %[^\n]", boat_input);

                            //Function call, passes the top pointer and the class input from the scanf
                            // Returns the list of the members.
                            search_boat_function(top_ptr, (char *) boat_input);
                            break;

                        case 4:
                            //Exit Statement, to go back to the main menu.
                            printf("Returning to main menu");
                            break;
                    }
                }
                break;

            case 2:
                // Entering a new member into the system, takes the input from the user, stores in char arrays
                // then passes it into a function which appends it to the text file, at the end.

                printf(" ---- Inputting a new menu ---- \n");
                printf("Please enter a family name: ");
                scanf("%s", name);
                printf("Please enter a personal name: ");
                scanf(" %[^\n]", personal_name);
                printf("Please enter a membership ID: ");
                scanf(" %i", &member_ID);

                printf("Please enter email address: ");
                scanf(" %[^\n]", email_address);
                printf("Please enter the boat class name: ");
                scanf(" %s", boat_class_name);
                printf("Please enter the boat name: ");
                scanf(" %[^\n]", boat_name);

                //function call, passes all the inputs given by the user, and the file name in order to append to the file.
                writing_to_file(file_directory_name, name, personal_name, email_address, member_ID, boat_class_name, boat_name);
                break;

            case 3:
                //Exit program statement.
                printf("Thank you for using this application, closing now");
                break;
        }
    }
}