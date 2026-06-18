
    if(n==0)
        return;

    rev=rev*10+n%10;
    reverse(n/10);
}

int main(){
    int n;
    cout<<"enter n";