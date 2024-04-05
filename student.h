/**
******************************************************************************************************
*@file            : student.h

*@author          : Ahmed_Ayman_Mohamed

*@brief           : Contains Sub-Program Declerations and Define the structure for a student
******************************************************************************************************
*/



/**************************** Include Definition Section Start ************************************************** */

//#define NULL 0
#undef NULL
#include <stddef.h>


/**************************** Include Definition Section End ************************************************** */


// Define the structure for a student
struct Student {
    int student_id;
    char name[50];
    char dob[20];
    char address[100];
     char phone[12]; // Increased size to accommodate 11 digits + null terminator
    float cs_score;
    struct Student* next;
};

// Create a typedef for the Student struct
typedef struct Student Student;

// Define the structure for a linked list of students
struct LinkedList {
    Student* head;
};

// Create a typedef for the LinkedList struct

typedef struct LinkedList LinkedList;


  /**************************** Sub-Program Declerations Section Start ************************************************** */

// Function prototypes

  void MAIN_MENU();
  void NEW_STUDENT(LinkedList* list);
  void DELETE_STUDENT(LinkedList* list);
  void print_separator_line();
  void STUDENT_LIST(LinkedList* list);
  void STUDENT_EDIT(LinkedList* list);
  void RANK_STUDENT(LinkedList* list);
  void STUDENT_SCORE(LinkedList* list);


/**************************** Sub-Program Declerations Section End ************************************************** */



 /**
**********************************************************************************************
User                      Date                          Brief
**********************************************************************************************


*/












