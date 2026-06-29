#include <iostream>
using namespace std;

void display(string project[], int n) {
    cout<<"\nProjects:\n";

    for(int i=0;i<n;i++) {
        cout<<project[i]<<endl;
    }
}

int main() {
    int n;

    cout<<"Enter number of projects: ";
    cin>>n;

    string project[n];

    for(int i=0;i<n;i++) {
        cout<<"Enter project "<<i+1<<": ";
        cin>>project[i];
    }

    display(project,n);

    return 0;
}