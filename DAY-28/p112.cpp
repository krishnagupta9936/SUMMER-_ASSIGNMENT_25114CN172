#include <iostream>
using namespace std;

class Contact {
public:
    string name;
    long long mobile;

    void input() {
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Mobile Number: ";
        cin>>mobile;
    }

    void display() {
        cout<<"\nContact Details";
        cout<<"\nName: "<<name;
        cout<<"\nMobile: "<<mobile;
    }
};

int main() {
    Contact c;
    c.input();
    c.display();

    return 0;
}