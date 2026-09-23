#include <iostream>
using namespace std;

int main()
{
 double marks[5];

cout << "Enter the marks of 5 students: " << endl;
for (int i = 0; i < 5; i++)

{

 cout << "Student " << (i+1) << ": ";
 cin >> marks[i];

}

 for (int i = 0; i < 5 - 1; i++)
 {
     for (int j = 0; j < 5 - i - 1; j++)
 {

     if (marks[j] < marks[j + 1]) {
       double temp = marks[j];
        marks[j] = marks[j + 1];
        marks[j +1] = temp;
       }

     }

  }

  cout << "\nMarks arranged from from highest to lowest:" << endl;
  for (int i = 0; i < 5; i++) {
      cout << "Rank" << (i + 1) << ": " << marks[i] << endl;
  }

  return 0;
}
