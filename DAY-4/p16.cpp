#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int original = n;
    int temp = n;

    int digits = 0;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    // Calculate Armstrong sum
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is Armstrong";
    else
        cout << original << " is Not Armstrong";

    return 0;
}