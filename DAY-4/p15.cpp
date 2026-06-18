#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int dup=n;
    int sum=0;
    
    while(n>0){
        int d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if (dup==sum){
        cout<<"No. is armstrong";

    }
    else{
        cout<<"No. is not armstrong";

    }
    return 0;

}
