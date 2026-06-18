#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}

int main(){
    int n,temp,sum=0;
    cout<<"enter n";
    cin>>n;

    temp=n;

    while(n>0){
        sum+=fact(n%10);
        n/=10;
    }

    if(sum==temp)
        cout<<"Strong Number";
    else
        cout<<"Not Strong";
        
}