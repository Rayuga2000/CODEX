#include<iostream>

using namespace std;

int fact(int x){
    int f=1;

    while(x>0)
    {
        f*=x;
        x--;
    }

    return f;
}

void peterson(int n){
    int num=n,sum=0;

    while(n>0)
    {
        int r=n%10;
        sum+=fact(r);
        n=n/10;
    }

    if(sum==num){
        cout<<num<<" is a peterson number"<<endl;
    }
    else{
        cout<<num<<" is not a peterson number"<<endl;
    }
}

int main()
{
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    peterson(n);

    return 0;
}