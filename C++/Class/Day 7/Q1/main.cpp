/*Write a C++ program to overload the ++ operator in the same class for pre and post increment.*/
#include<iostream>

using namespace std;

class integer{
    int x;

    public:
    integer(){}

    integer(int x){
        this->x=x;
    }

    integer operator++(){
        cout<<"pre-increment";
        integer temp;
        temp.x=++x;
        return temp;
    }
    integer operator++(int){
        cout<<"post-increment";
        integer temp;
        x++;
        temp.x=x;
        return temp;
    }

    void show(){
        cout<<" Result=> "<<x<<endl;
    }
};

int main()
{
    integer i1(2),i2(3),i3;

    i3=++i1;
    i3.show();

    i3=i2++;
    i3.show();

    return 0;
}