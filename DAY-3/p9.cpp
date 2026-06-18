#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Number is not prime";
        return 0;
    }

    bool prime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "Number is prime";
    else
        cout << "Number is not prime";

    return 0;
}