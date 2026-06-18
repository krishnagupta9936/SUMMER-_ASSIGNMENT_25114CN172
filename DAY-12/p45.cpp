#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int temp = n, rev = 0;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return n == rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindrome(num)) cout << "It is a Palindrome." << endl;
    else cout << "It is not a Palindrome." << endl;
    return 0;
}