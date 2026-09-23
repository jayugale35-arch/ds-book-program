#include <iostream>

using namespace std;

struct Student {
    int rollNo;
    float marks;

};

 int main() {

    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];

    int studentCount = 0; 
    int choice;

    do {

       cout << "\n======\n";
       cout << "  STUDENT MANAGEMENT SYSTEM  \n";
       cout << "=====\n";
       cout << "1. Add Student Record\n";
       cout << "2. Display All Student Records\n";
       cout << "3. Search Student by Roll No\n";
       cout << "4. Exit\n";
       cout << "Enter your choice (1-4): ";
       cin >> choice;

      switch (choice) {

     case 1: {

    if (studentCount >= MAX_STUDENTS) {
       cout  << "Error: Database is full!\n";
   } else {
       cout << "\nEnter Details for Student "
       cout << "Enter Roll Number: ";
       cin >> students[studentCount].rollNo;
       cout << "Enter Marks: ";
       cin >> students[studentCount].marks;

      studentCount++;
      cout << "Record added succesfully!\n";

   }
   break;
}
 case 2: {

      if (studentCount == 0) {
         cout << "\nNo records found. Please add a student fir:
 } else {
        cout << "\n--- ALL STUDENT RECORDS ---\n";
        for (int i = 0; i < studentCount; i++) {
            cout << "Student " << i + 1 << " -> ":
            cout << "Roll No: " << students[i].rollNo;
            cout << " | marks: " << students[i].marks << "\n"
    }
  }
  break;
}
 case 3: {
      if (studentCount == 0) {
          cout << "\nNo records available to search. \n";
  } else {
       int searchRoll;
       cout << "\nEnter Roll Number to search: ";
       cin >> searchRoll;
