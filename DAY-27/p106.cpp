#include <iostream>
using namespace std;

class Bank {
private:
    float balance = 0;

public:
    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance";
    }

    void display() {
        cout << "\nBalance: " << balance;
    }
};

int main() {
    Bank b;
    int choice;
    float amount;

    do {
        cout << "\n1.Deposit";
        cout << "\n2.Withdraw";
        cout << "\n3.Display";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cin >> amount;
                b.deposit(amount);
                break;

            case 2:
                cin >> amount;
                b.withdraw(amount);
                break;

            case 3:
                b.display();
                break;
        }

    } while(choice != 4);

    return 0;
}