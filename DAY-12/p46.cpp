#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    int t1 = n;
    while (t1 > 0) { digits++; t1 /= 10; }
    while (temp > 0) {
        int rem = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) p *= rem;
        sum += p;
        temp /= 10;
    }
    return n == sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) cout << "It is an Armstrong number." << endl;
    else cout << "It is not an Armstrong number." << endl;
    return 0;
}