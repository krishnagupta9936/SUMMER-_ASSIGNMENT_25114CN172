#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1,100);

    cout << "Enter second string: ";
    cin.getline(str2,100);

    int freq1[256] = {0};
    int freq2[256] = {0};

    for(int i=0; str1[i]!='\0'; i++)
        freq1[str1[i]]++;

    for(int i=0; str2[i]!='\0'; i++)
        freq2[str2[i]]++;

    bool anagram = true;

    for(int i=0;i<256;i++) {
        if(freq1[i] != freq2[i]) {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are not Anagrams";

    return 0;
}