#include <iostream>
using namespace std;

class Inventory {
public:
    string item;
    int quantity;

    void input() {
        cout<<"Enter Item Name: ";
        cin>>item;

        cout<<"Enter Quantity: ";
        cin>>quantity;
    }

    void display() {
        cout<<"\nItem: "<<item;
        cout<<"\nQuantity: "<<quantity;
    }
};

int main() {
    Inventory i;
    i.input();
    i.display();

    return 0;
}