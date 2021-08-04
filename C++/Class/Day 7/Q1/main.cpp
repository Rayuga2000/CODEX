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
        integer temp;
        temp.x=++x;
        return temp;
    }
    integer operator++(int){
        integer temp;
        temp.x=x++;
        return temp;
    }

    void show(){
        cout<<"Result=> "<<x<<endl;
    }
};

int main()
{
    integer i1(2),i2(3),i3;

    i3=++i1;
    i3.show();

    i3=i1++;
    i3.show();

    return 0;
}