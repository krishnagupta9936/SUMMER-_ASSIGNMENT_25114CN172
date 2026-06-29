#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;

    void input() {
        cout<<"Enter ID: ";
        cin>>id;

        cout<<"Enter Name: ";
        cin>>name;
    }

    void display() {
        cout<<"\nID: "<<id;
        cout<<"\nName: "<<name;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();

    return 0;
}