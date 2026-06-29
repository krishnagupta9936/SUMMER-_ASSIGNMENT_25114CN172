#include <iostream>
using namespace std;

class Library {
public:
    string bookName;
    int bookID;

    void input() {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void display() {
        cout << "\nBook ID: " << bookID;
        cout << "\nBook Name: " << bookName;
    }
};

int main() {
    Library l;
    l.input();
    l.display();

    return 0;
}