#include<iostream>
using namespace std;

int main(){
    int n,bin=0,place=1;
cout<<"enter n:";
    cin>>n;

    while(n>0){
        bin+=(n%2)*place;
        place*=10;
        n/=2;
    }

    cout<<bin;
}