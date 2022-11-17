#include<iostream>

using namespace std;

int x=1;

int main(){
    int x=0;

    x=5;
    ::x=100;
    
    cout<<x<<","<<::x<<endl;

    return 0;
}