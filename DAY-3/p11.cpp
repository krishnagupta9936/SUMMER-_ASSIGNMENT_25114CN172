#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter values: ";
    cin >> a >> b;

    while (a > 0 && b > 0) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }

        if (a == b) {
            cout << a << endl;
            break; // Stop the loop once they are equal
        }
    }
    return 0;
}