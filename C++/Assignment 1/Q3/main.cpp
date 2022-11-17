/*Define a class for complex number. Write a C++ program to
read, print and add two complex number.*/
#include<iostream>
using namespace std;

class Complex{
    public:
    int real,img;

    void getComplex()
    {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>img;
    }

    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1,c2;

    cout<<":::::Enter 1st Number:::::\n\n";
    c1.getComplex();
    cout<<"\n1st Complex Number: ";
    c1.display();

    cout<<"\n\n:::::Enter 2nd Number:::::\n\n";
    c2.getComplex();
    cout<<"\n2nd Complex Number: ";
    c2.display();

    int real=c1.real+c2.real;
    int img=c1.img+c2.img;

    cout<<"\n\nThe Sum of the Complex Numbers are=> "<<real<<"+"<<img<<"i"<<endl;

    return 0;
}
