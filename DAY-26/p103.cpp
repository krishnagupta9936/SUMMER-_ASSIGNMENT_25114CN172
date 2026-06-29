#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 5000, amount;

    do {
        cout << "\n1.Check Balance";
        cout << "\n2.Deposit";
        cout << "\n3.Withdraw";
        cout << "\n4.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Balance: " << balance;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient balance";
                break;

            case 4:
                cout << "Thank you!";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}