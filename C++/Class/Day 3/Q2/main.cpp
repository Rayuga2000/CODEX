/*Write a C++ program which will perform the operations associated with a rectangle
using with member functions to find its area, perimeter and diagonal using inline function.*/
#include<iostream>
#include<cmath>

using namespace std;

class rectangle{
    public:

    double area(double l,double w){
        return(l*w);
    }

    double perimeter(double l,double w){
        return(2*(l+w));
    }

    double diagonal(double l,double w){
        return(sqrt((l*l)+(w*w)));
    }
};

int main(){
    double l,w;

    rectangle rect;

    cout<<"Enter the Length and Width of the Rectangle: ";
    cin>>l>>w;

    cout<<"Area=> "<<rect.area(l,w)<<endl;
    cout<<"Perimeter=> "<<rect.perimeter(l,w)<<endl;
    cout<<"Diagonal=> "<<rect.diagonal(l,w)<<endl;

    return 0;
}