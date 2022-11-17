/*Write a program illustrating the overloading of binary operator.*/
#include<iostream>

using namespace std;

class cls{
    int x,y;
    public:
    cls(){}

    cls(int x,int y){
        this->x=x;
        this->y=y;
    }

    cls operator+(cls &c2){
        cls c;

        c.x=x+c2.x;
        c.y=y+c2.y;

        return c;
    }

    void display(){
        cout<<"The Complex Number is=> "<<x<<" + "<<y<<"i"<<endl;
    }
};

int main()
{
    cls c1(12,13),c2(23,21);

    cls c=c1+c2;
    c.display();

    return 0;
}