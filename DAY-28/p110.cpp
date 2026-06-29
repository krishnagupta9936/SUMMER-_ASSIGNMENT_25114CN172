#include <iostream>
using namespace std;

class Bank {
private:
    float balance=1000;

public:
    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if(amt <= balance)
            balance -= amt;
        else
            cout<<"Insufficient Balance";
    }

    void show() {
        cout<<"\nCurrent Balance: "<<balance;
    }
};

int main() {
    Bank b;
    int choice;
    float amount;

    do {
        cout<<"\n1.Deposit";
        cout<<"\n2.Withdraw";
        cout<<"\n3.Show Balance";
        cout<<"\n4.Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cin>>amount;
                b.deposit(amount);
                break;

            case 2:
                cin>>amount;
                b.withdraw(amount);
                break;

            case 3:
                b.show();
                break;
        }
    } while(choice!=4);

    return 0;
}