#include<iostream>
using namespace std;

int main(){
    int n,count=0;
cout<<"enter n";
    cin>>n;

    while(n){
        count+=n&1;
        n>>=1;
    }

    cout<<count;
}