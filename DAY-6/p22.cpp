#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,dec=0,p=0;
cout<<"entee n";
    cin>>n;

    while(n>0){
        dec+=(n%10)*pow(2,p);
        p++;
        n/=10;
    }

    cout<<dec;
}