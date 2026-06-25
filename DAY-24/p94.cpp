#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter string: ";
    cin >> str;

    int count = 1;

    for(int i=0; str[i]!='\0'; i++) {

        while(str[i] == str[i+1]) {
            count++;
            i++;
        }

        cout << str[i] << count;
        count = 1;
    }

    return 0;
}