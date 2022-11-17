/*Write C++ program to demonstrate call by value and call by reference.*/
#include<iostream>

using namespace std;

void show_val(int x){
    cout<<"Call by value => "<<x<<endl;
}
void show_ref(int &x){
    cout<<"Call by reference => "<<x<<endl;
}

int main()
{
    int x=5;

    show_val(x);
    show_ref(x);

    return 0;
}