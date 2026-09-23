
#include <iostream>
using namespace std;

int main(){
    int array[5];
    int roll;

    for(int i=0;i<5;i++){
        cout<<"Enter roll number of student "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<"\nEnter the roll number of the student you want to search: ";
    cin>>roll;

    for(int i=0; i<5;i++){
        if(array[i]==roll){
            cout<<"Student Found";
            return 0;
        }
    }
    cout<<"Student not found";
    return 0;
}
