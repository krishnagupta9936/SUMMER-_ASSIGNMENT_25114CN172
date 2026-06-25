#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter string: ";
    cin.getline(str,100);

    int freq[256] = {0};

    for(int i=0; str[i]!='\0'; i++) {
        freq[str[i]]++;
    }

    int max = 0;
    char ch;

    for(int i=0; str[i]!='\0'; i++) {
        if(freq[str[i]] > max) {
            max = freq[str[i]];
            ch = str[i];
        }
    }

    cout << "Maximum occurring character: "
         << ch;

    return 0;
}