#include <iostream>
using namespace std;

class Product {
public:
    int id;
    string name;
    int stock;

    void input() {
        cout<<"Enter Product ID: ";
        cin>>id;

        cout<<"Enter Product Name: ";
        cin>>name;

        cout<<"Enter Stock: ";
        cin>>stock;
    }

    void display() {
        cout<<"\nProduct ID: "<<id;
        cout<<"\nProduct Name: "<<name;
        cout<<"\nStock: "<<stock;
    }
};

int main() {
    Product p;
    p.input();
    p.display();

    return 0;
}