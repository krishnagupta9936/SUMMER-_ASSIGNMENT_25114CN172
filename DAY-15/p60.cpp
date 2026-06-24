#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int count=0;

    for(int i=0;i<n;i++) {
        if(arr[i]!=0) {
            arr[count]=arr[i];
            count++;
        }
    }

    while(count<n) {
        arr[count]=0;
        count++;
    }

    cout<<"Array after moving zeros: ";

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}