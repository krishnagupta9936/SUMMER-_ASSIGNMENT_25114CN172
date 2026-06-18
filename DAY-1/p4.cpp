#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of number";
    cin>>n;
       int count=0;
        while(n>0){
            int lastDigit=n%10;
            count=count+1;
            n=n/10;

        }
        cout<<"The total number of digits are"<<count<<endl;

        return 0;
    
}