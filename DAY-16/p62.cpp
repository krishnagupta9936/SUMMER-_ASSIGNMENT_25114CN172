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

    int maxCount=0, element;

    for(int i=0;i<n;i++) {
        int count=1;

        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j])
                count++;
        }

        if(count>maxCount) {
            maxCount=count;
            element=arr[i];
        }
    }

    cout<<"Maximum frequency element = "<<element;

    return 0;
}