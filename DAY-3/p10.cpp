#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int count = 0;

        if (i <= 1)
            continue;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            cout << i << " ";
        }
    }

    return 0;
}