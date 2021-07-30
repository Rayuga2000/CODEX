/*Write a C++ program to demonstrate friend function.*/
#include<iostream>

using namespace std;

class x{
    int x;
    public:
    friend void display();
};

void display()
{
    cout<<"This is a private member in Class x=> "<<x<<endl;
}
int main()
{
    display();
    return 0;
}