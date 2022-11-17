/*Write a C++ program which demonstrates the use
of a class template with two generic data types.*/
#include<iostream>

using namespace std;

template<typename t1,typename t2>
class Rectangle{
    t1 l;
    t2 w;
    
    public:
    Rectangle(){}
    Rectangle(t1 l,t2 w):l(l),w(w){
        cout<<"Area of the Rectangle is = "<<l*w<<endl;
    }
};

int main()
{
    Rectangle<int,float> r1(7,2.3);
    Rectangle<float,int> r2(7.23,23);

    return 0;
}