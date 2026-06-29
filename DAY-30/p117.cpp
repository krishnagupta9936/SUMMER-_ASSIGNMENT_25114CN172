#include <iostream>
using namespace std;

int main() {
    string name;
    float marks;

    cout<<"Enter Student Name: ";
    cin>>name;

    cout<<"Enter Marks: ";
    cin>>marks;

    cout<<"\nName: "<<name;

    if(marks>=40)
        cout<<"\nResult: Pass";
    else
        cout<<"\nResult: Fail";

    return 0;
}