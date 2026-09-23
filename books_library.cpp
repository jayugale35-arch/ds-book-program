#include <iostream>
using namespace std;

int main() {
   int id1, id2, id3, id4, id5;
   string title1, title2, title3, title4, title5;

   cout << "Enter Book id1: ";
   cin >> id1;
   
   cin.ignore();
   cout <, "Enter Book Title: ";
   getline(cin, title1);

   cout << "Enter Book id1: ";
   cin >> id2;
   
   cin.ignore();
   cout <, "Enter Book Title: ";
   getline(cin, title2);

   cout << "Enter Book id1: ";
   cin >> id3;
   
   cin.ignore();
   cout <, "Enter Book Title: ";
   getline(cin, title3);
   
   cout << "Enter Book id1: ";
   cin >> id4;
   
   cin.ignore();
   cout <, "Enter Book Title: ";
   getline(cin, title4);
   
   cout << "Enter Book id1: ";
   cin >> id5;
   
   cin.ignore();
   cout <, "Enter Book Title: ";
   getline(cin, title5);
   
   
   // Display
   
   cout<< "\n Book Id1 = "<<id1;
   cout<< "\n Book Title1 = "<<title1;
   cout<< "\n Book Id2 = "<<id1;
   cout<< "\n Book Title2 = "<<title1;
   cout<< "\n Book Id3 = "<<id1;
   cout<< "\n Book Title3 = "<<title1;
   cout<< "\n Book Id4 = "<<id1;
   cout<< "\n Book Title4 = "<<title1;
   cout<< "\n Book Id5 = "<<id1;
   cout<< "\n Book Title5 = "<<title1;
   
   return 0;
   
   }
