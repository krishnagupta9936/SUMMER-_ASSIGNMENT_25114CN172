#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance=5000, amount;

    do {
        cout<<"\n1.Deposit";
        cout<<"\n2.Withdraw";
        cout<<"\n3.Check Balance";
        cout<<"\n4.Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice) {

        case 1:
            cout<<"Amount: ";
            cin>>amount;
            balance+=amount;
            break;

        case 2:
            cout<<"Amount: ";
            cin>>amount;

            if(amount<=balance)
                balance-=amount;
            else
                cout<<"Insufficient Balance";
            break;

        case 3:
            cout<<"Balance: "<<balance;
            break;
        }

    } while(choice!=4);

    return 0;
}