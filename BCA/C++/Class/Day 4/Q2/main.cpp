/*Write a C++ program to demonstrate function overloading*/
#include<iostream>

using namespace std;

class myClass{
    public:
    void display(int x,int y){
        cout<<"First display() is called"<<endl;
        cout<<"X=> "<<x<<"\nY=> "<<y<<endl;
    }
    void display(int x,int y,int z){
        cout<<"Second display() is called"<<endl;
        cout<<"X=> "<<x<<"\nY=> "<<y<<"\nZ=> "<<z<<endl;
    }
};

int main()
{
    myClass cls;
    
    cls.display(10,20);
    cls.display(10,20,30);

    return 0;
}