#include <iostream>
using namespace std;

class User {
public:
    string username;
    string password;

    void createAccount() {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;
    }

    void display() {
        cout << "\nAccount Created Successfully!";
        cout << "\nUsername: " << username;
    }
};

int main() {
    User u;

    u.createAccount();
    u.display();

    return 0;
}