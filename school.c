/**
******************************************************************************************************
*@file            : school.c

*@author          : Ahmed_Ayman_Mohamed

*@brief           : Contains Sub-Programs
******************************************************************************************************
*/

/**************************** Include Section Start ************************************************** */

//#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

/**************************** Include Section End ************************************************** */


/**************************** Sub-Program Section Start ************************************************** */
// Function to display the main menu
void MAIN_MENU() {
    printf("Welcome to School Management System\n");
    printf("1. Add New Student\n");
    printf("2. Delete Student\n");
    printf("3. List Students\n");
    printf("4. Edit Student Details\n");
    printf("5. Rank Students by CS Score\n");
    printf("6. Update Student CS Score\n");
    printf("7. Exit\n");
}

 // Function to add a new student to the linked list

void NEW_STUDENT(LinkedList* list) {
    Student* new_student = (Student*)malloc(sizeof(Student));

    printf("Enter Student ID: ");
    scanf("%d", &new_student->student_id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", new_student->name); // Allow spaces in name

    printf("Enter Date of Birth: ");
    scanf(" %[^\n]", new_student->dob);

    printf("Enter Address: ");
    scanf(" %[^\n]", new_student->address); // Allow spaces in address

   // printf("Enter Phone Number: ");
  //  scanf(" %[^\n]", new_student->phone);

    // Validation loop for phone number
    do {
        printf("Enter Phone Number (exactly 11 digits): ");
        scanf("%s", new_student->phone);
        if (strlen(new_student->phone) != 11) {
            printf("Invalid phone number length. Please enter exactly 11 digits.\n");
        }
    } while (strlen(new_student->phone) != 11);

    // Validate CS Score
    do {
        printf("Enter CS Score (0-100): ");
        scanf("%f", &new_student->cs_score);

        if (new_student->cs_score < 0 || new_student->cs_score > 100) {
            printf("Error: CS Score must be between 0 and 100. Please try again.\n");
        }
    } while (new_student->cs_score < 0 || new_student->cs_score > 100);

    new_student->next = list->head;
    list->head = new_student;

    printf("Student added successfully!\n");
}


 // Function to delete a student from the linked list

void DELETE_STUDENT(LinkedList* list) {
    int student_id;
    printf("Enter Student ID to delete: ");
    scanf("%d", &student_id);

    Student* current = list->head;
    Student* prev = NULL;

    while (current != NULL) {
        if (current->student_id == student_id) {
            if (prev == NULL) {
                list->head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            printf("Student deleted successfully!\n");
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("Student not found!\n");
}

    // Function to print a separator line for better formatting

void print_separator_line() {
    printf("+------+----------------------+------------+----------------------+---------------+------------+\n");
}


// Function to list all students with their details

void STUDENT_LIST(LinkedList* list) {
    if (list->head == NULL) {
        printf("No students to list.\n");
        return;
    }

    // Display table header
    printf("+------+----------------------+------------+----------------------+---------------+------------+\n");
    printf("| ID   | Name                 | DOB        | Address              | Phone         | CS Score   |\n");
    printf("+------+----------------------+------------+----------------------+---------------+------------+\n");

    Student* current = list->head;

    // Create an array of students for sorting
    int num_students = 0;
    while (current != NULL) {
        num_students++;
        current = current->next;
    }

    Student* students[num_students];
    current = list->head;
    int index = 0;

    while (current != NULL) {
        students[index++] = current;
        current = current->next;
    }

    // Sorting students alphabetically by name using bubble sort
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (strcmp(students[j]->name, students[j + 1]->name) > 0) {
                Student* temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display sorted students in the table
    for (int i = 0; i < num_students; i++) {
        printf("| %-4d | %-20s | %-10s | %-20s | %-13s | %-10.2f |\n",
               students[i]->student_id, students[i]->name, students[i]->dob,
               students[i]->address, students[i]->phone, students[i]->cs_score);
        print_separator_line();
    }
}

// Function to edit student details 
void STUDENT_EDIT(LinkedList* list) {
    int student_id;
    printf("Enter Student ID to edit: ");
    scanf("%d", &student_id);

    Student* current = list->head;

    while (current != NULL) {
        if (current->student_id == student_id) {
            int choice;
            printf("Choose information to edit:\n");
            printf("1) Edit Name\n");
            printf("2) Edit Date of Birth\n");
            printf("3) Edit Address\n");
            printf("4) Edit Phone Number\n");
            printf("5) Edit Student CS Score\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Enter new Name: ");
                    scanf(" %[^\n]", current->name); // Allow spaces in name
                    break;
                case 2:
                    printf("Enter new Date of Birth: ");
                    scanf(" %[^\n]", current->dob); // Allow spaces in Date of Birth
                    break;
                case 3:
                    printf("Enter new Address: ");
                    scanf(" %[^\n]", current->address); // Allow spaces in address
                    break;
                case 4:
                    // Validation loop for phone number
                    do {
                        printf("Enter new Phone Number (exactly 11 digits): ");
                        scanf("%s", current->phone);
                        if (strlen(current->phone) != 11) {
                            printf("Invalid phone number length. Please enter exactly 11 digits.\n");
                        }
                    } while (strlen(current->phone) != 11);
                    break;
                case 5:
                    // Validation loop for CS score
                    do {
                        printf("Enter new CS Score (0-100): ");
                        scanf("%f", &current->cs_score);
                        if (current->cs_score < 0 || current->cs_score > 100) {
                            printf("Error: CS Score must be between 0 and 100. Please try again.\n");
                        }
                    } while (current->cs_score < 0 || current->cs_score > 100);
                    break;
                default:
                    printf("Invalid choice\n");
                    return;
            }

            printf("Student details updated successfully!\n");
            return;
        }
        current = current->next;
    }

    printf("Student not found!\n");
}


  // Function to rank students based on their CS score

void RANK_STUDENT(LinkedList* list) {
    if (list->head == NULL) {
        printf("No students to rank.\n");
        return;
    }

    // Display table header
    printf("+------+----------------------+------------+----------------------+---------------+------------+\n");
    printf("| ID   | Name                 | DOB        | Address              | Phone         | CS Score   |\n");
    printf("+------+----------------------+------------+----------------------+---------------+------------+\n");

    // Create an array of students for sorting
    int num_students = 0;
    Student* current = list->head;

    while (current != NULL) {
        num_students++;
        current = current->next;
    }

    Student* students[num_students];
    current = list->head;
    int index = 0;

    while (current != NULL) {
        students[index++] = current;
        current = current->next;
    }

    // Sorting students by CS score using bubble sort
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j]->cs_score < students[j + 1]->cs_score) {
                Student* temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display sorted students in the table
    for (int i = 0; i < num_students; i++) {
        printf("| %-4d | %-20s | %-10s | %-20s | %-13s | %-10.2f |\n",
               students[i]->student_id, students[i]->name, students[i]->dob,
               students[i]->address, students[i]->phone, students[i]->cs_score);
        print_separator_line();
    }
}

 // Function to update All student's CS score

void STUDENT_SCORE(LinkedList* list) {
    Student* current = list->head;

    while (current != NULL) {
        float new_score;

        do {
            printf("Enter CS Score for Student ID %d (0-100): ", current->student_id);
            scanf("%f", &new_score);

            if (new_score < 0 || new_score > 100) {
                printf("Error: CS Score must be between 0 and 100. Please try again.\n");
            }
        } while (new_score < 0 || new_score > 100);

        current->cs_score = new_score;
        printf("CS Score for Student ID %d updated successfully!\n", current->student_id);

        current = current->next;
    }
}
  /**************************** Sub-Program Section End ************************************************** */




/**
**********************************************************************************************
User                      Date                          Brief
**********************************************************************************************


*/
