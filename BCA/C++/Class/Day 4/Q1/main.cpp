/*Write a C++ program to demonstrate copy constructor.*/
#include<iostream>

using namespace std;

class myClass{
    int x;

    public:
    myClass(){}

    myClass(int y){
        x=y;
    }

    myClass(myClass &c){
        cout<<"myClass constructor called"<<endl;
        x=c.x;
    }

    void display(){
        cout<<x<<endl;
    }
};

int main()
{
    myClass y(50);
    y.display();
    myClass z(y);
    z.display();
}
