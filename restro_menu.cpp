#include<iostream>
using namespace std;
void menu()
{
int choice;
cout<<"\n ==========RESTAURANT MENU========\n";
cout<<"\n1.Pizza";
cout<<"\n2.Burger";
cout<<"\n3.pasta";
cout<<"\n4.Exit.";
cout<<"Enter your choice:";
cin>>choice;
if (choice==1)
{
cout<<"You selected Pizza.";
menu();
}
else if(choice==2)
{
cout<<"You selected Burger.";
menu();
}
else if (choice==3)
{
cout<<"You selected Pasta.";
menu();
}
else if (choice==4)
{
cout<<"\nThankyou!!";
}
else
{
cout<<"\n.Invalid choice,";
menu();
}
}
int main()
{
menu();
return 0;
}