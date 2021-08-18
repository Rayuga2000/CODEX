/* Write a c++ program which will create a
abstract class Shape which contain a pure virtual function area( ). Define
4 derived classes Circle, Triangle, Rectangle, Square which override the
method area( ). Now from main( ) create object of derived classes and call
the corresponding area( ) method.*/
#include<iostream>
#include<cmath>

using namespace std;

class Shape
{
    public:
    virtual void area()=0;
};

class Circle:public Shape
{
    int r;

    public:
    Circle(){}
    Circle(int r):r(r){}

    void area(){
        cout<<"Area of the Circle = "<<M_PI*r*r<<endl;
    }
};

class Triangle:public Shape
{
    int h,b;

    public:
    Triangle(){}
    Triangle(int h,int b):h(h),b(b){}
    
    void area(){
        cout<<"Area of the Triangle = "<<0.5*h*b<<endl;
    }
};

class Rectangle:public Shape
{
    int l,w;

    public:
    Rectangle(){}
    Rectangle(int l,int w):l(l),w(w){}
    
    void area(){
        cout<<"Area of the Rectangle = "<<l*w<<endl;
    }
};

class Square:public Shape
{
    int a;

    public:
    Square(){}
    Square(int a):a(a){}

    void area(){
        cout<<"Area of the Square = "<<a*a<<endl;
    }
};

int main()
{
    Circle c(5);
    Triangle t(5,3);
    Rectangle r(5,3);
    Square s(7);

    c.area();
    t.area();
    r.area();
    s.area();

    return 0;
}