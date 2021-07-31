/*Write a C++ program to demonstrate friend function.*/
#include<iostream>

using namespace std;

class cls{
    int x=25;

    public:
    friend void display();
};

void display()
{
    cls obj;
    cout<<"This is a private member in Class x=> "<<obj.x<<endl;
}

int main()
{
    display();

    return 0;
}