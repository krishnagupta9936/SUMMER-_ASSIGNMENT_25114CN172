#include<iostream>
using namespace std;

int main(){
    int x,n,result=1;
cout<<"enter n";
    cin>>x>>n;

    for(int i=1;i<=n;i++)
        result*=x;

    cout<<result;
}