#include <iostream>
using namespace std;

class Salary {
public:
    float basic, hra, da, total;

    void input() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        hra = basic * 0.20;
        da = basic * 0.10;
        total = basic + hra + da;
    }

    void display() {
        cout << "Total Salary: " << total;
    }
};

int main() {
    Salary s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}