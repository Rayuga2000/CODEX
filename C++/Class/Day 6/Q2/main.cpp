/*Write ‘C++’ class for the following:
To represent two-dimensional Point (x, y), class should contain
all different constructors, destructors and methods to print Point (x, y)
format, calculate the distance between two points and also display the
distance.*/
#include<iostream>
#include<cmath>

using namespace std;

class Dimention{
    int x,y;

    public:
    Dimention(){}

    Dimention(int x,int y){
        this->x=x;
        this->y=y;
    }
    ~Dimention(){}

    int operator-(Dimention &d2){
        int d;

        d=sqrt(pow(d2.x-x,2)+pow(d2.y-y,2));

        return d;
    }

    void display(char c){
        cout<<"Dimention of the point "<<c<<" is=> "<<"("<<x<<","<<y<<")"<<endl;
    }
    void display(int d){
        cout<<"The distance is=> "<<d<<endl;
    }
};

int main()
{
    Dimention d1(2,3),d2(4,5);

    d1.display('A');
    d2.display('B');
    d1.display(d1-d2);

    return 0;
}
