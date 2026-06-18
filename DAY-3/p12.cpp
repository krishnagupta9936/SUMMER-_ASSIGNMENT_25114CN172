#include <iostream>


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b; // Rearranged to avoid integer overflow
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "LCM is: " << lcm(num1, num2) << std::endl;
    return 0;
}