#include <iostream>
using namespace std;

class Booking {
public:
    string name;
    int seats;

    void input() {
        cout<<"Enter customer name: ";
        cin>>name;

        cout<<"Enter seats: ";
        cin>>seats;
    }

    void display() {
        cout<<"\nBooking Successful";
        cout<<"\nName: "<<name;
        cout<<"\nSeats: "<<seats;
    }
};

int main() {
    Booking b;
    b.input();
    b.display();

    return 0;
}