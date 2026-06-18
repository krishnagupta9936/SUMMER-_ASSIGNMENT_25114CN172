#include<iostream>
using  namespace std;
int main(){
int n;
       
    int rev=0;
    cout<<"Enter a number";
    cin>>n;
    int dup=n;
    while(n>0){
       int lastdigit=n%10;
       rev=((rev*10)+lastdigit);
       n=n/10;
    }
    if(dup==rev)
    {
        cout<<"number is pallindrome";
    }
    else{
        cout<<"nuber is not pallindrome";
    }
    return 0;


}