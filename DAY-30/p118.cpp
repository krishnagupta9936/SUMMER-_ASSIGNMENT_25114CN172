#include <iostream>
using namespace std;

class Library {
public:
    string book;

    void input() {
        cout<<"Enter Book Name: ";
        cin>>book;
    }

    void display() {
        cout<<"\nBook Issued: "<<book;
    }
};

int main() {
    Library l;
    l.input();
    l.display();

    return 0;
}