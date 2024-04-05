/**
******************************************************************************************************
*@file            : main.c

*@author          : Ahmed_Ayman_Mohamed

*@brief           : Contains the main function
******************************************************************************************************
*/

/**************************** Include Section Start ************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
/**************************** Include Section End ************************************************** */

  // The main function

int main() {

    // Initialize the student linked list
    LinkedList student_list;
    student_list.head = NULL;

    while (1) {

        // Display the main menu and handle user choices

        MAIN_MENU();
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                NEW_STUDENT(&student_list);
                break;
            case 2:
                DELETE_STUDENT(&student_list);
                break;
            case 3:
                STUDENT_LIST(&student_list);
                break;
            case 4:
                STUDENT_EDIT(&student_list);
                break;
            case 5:
                RANK_STUDENT(&student_list);
                break;
            case 6:
                STUDENT_SCORE(&student_list);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}

/**
**********************************************************************************************
User                      Date                          Brief
**********************************************************************************************


*/
