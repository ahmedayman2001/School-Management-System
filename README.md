# School Management System

<img src='https://i.pinimg.com/originals/04/a2/cc/04a2cc1c7d7b194d56c70c6d90bb80cc.gif' height='300px' />

## Video Demo

[Watch the **demo video** here](https://youtu.be/r-hgK1gviPs?si=iqcw7uTJXpvsgKx6)

## Description

The **School Management System** is a software application designed to **streamline** the management of student records within a school. This system allows administrators to **efficiently add, delete, list, edit, rank, and update** student information through a **user-friendly interface**.

### Purpose

The purpose of this project is to provide a **convenient** and **organized** way for schools to manage their student records. Traditional methods of record-keeping, such as paper-based systems or spreadsheets, can be **cumbersome** and **prone to errors**. By **digitizing** the process, the **School Management System** aims to **improve efficiency, accuracy, and accessibility**.

### Features

[![image2.png](https://i.postimg.cc/Y02KwmpB/image2.png)](https://postimg.cc/ygGrmxgL)

#### 1. Add New Student

[![image-5.png](https://i.postimg.cc/ZqnD6BmV/image-5.png)](https://postimg.cc/5Hc3Vt6C)

Administrators can **easily add new students** to the system by providing details such as student ID, name, date of birth, address, phone number, and CS score. The system **dynamically allocates memory** for each new student and adds them to the linked list.

#### 2. Delete Student

[![image-6.png](https://i.postimg.cc/Kj0M7zxD/image-6.png)](https://postimg.cc/m1FkBTcP)

Administrators have the ability to **delete a student** from the system based on their student ID. This feature helps keep the student records **updated** and **organized**.

#### 3. List Students

[![image3.png](https://i.postimg.cc/2jMZHdTW/image3.png)](https://postimg.cc/pyQrrFwV)

The system can **list all students** in the database, displaying their details in a **tabular format**. Students are **sorted alphabetically** by name for **easier navigation** and **reference**.

#### 4. Edit Student Details

[![image9.png](https://i.postimg.cc/RVMBPJ64/image9.png)](https://postimg.cc/YjyZ09zs)

Administrators can **edit the details** of a student in the system, including their name, date of birth, address, phone number,and CS Score. This feature ensures that **student information remains accurate** and **up-to-date**.

#### 5. Rank Students by CS Score

[![image7.png](https://i.postimg.cc/W1L2WVzG/image7.png)](https://postimg.cc/crhyCVQC)

The system **ranks students** based on their CS scores in **descending order**. This feature helps **identify high-performing students** and **monitor their progress** over time.

#### 6. Update Student CS Score

[![image8.png](https://i.postimg.cc/Xq6b2c7V/image8.png)](https://postimg.cc/TL0F1bDS)

Administrators can **update the CS scores** of all students in the system. This feature allows for **easy tracking** of academic performance and enables **timely intervention** if needed.

### Implementation Details

#### File Structure
- `main.c`: Contains the **main function** that initializes the program and handles user interactions.
- `school.c`: Contains **sub-programs** for managing student records, including functions for adding, deleting, listing, editing, ranking, and updating student information.
- `student.h`: Defines the structure for a student and declares function prototypes for sub-program functions.

#### Design Choices
- **Linked List Data Structure**: The decision to use a **linked list** to store student records was made to allow for **dynamic memory allocation** and **efficient insertion/deletion operations**. Linked lists provide **flexibility** and **scalability**, making them suitable for managing **variable-sized data sets** like student records.
- **Modular Design**: The system is designed with **modularity** in mind, with separate files for the main program logic (`main.c`) and sub-programs (`school.c`). This modular structure promotes **code readability, maintainability, and reusability**.
- **User-Friendly Interface**: The **main menu** (`MAIN_MENU()`) provides a **clear and concise interface** for users to navigate through the system's functionalities. Input validation and error handling are implemented to enhance the **user experience** and prevent **unexpected behavior**.

## Conclusion

The **School Management System** offers a **comprehensive solution** for schools to **efficiently manage** their student records. By leveraging **modern software technologies** and **best practices** in software design, the system aims to **streamline administrative tasks**, **improve data accuracy**, and **enhance overall productivity**. With its **user-friendly interface** and **robust features**, the **School Management System** is poised to **revolutionize** the way schools handle student management.



