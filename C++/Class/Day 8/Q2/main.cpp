/*Write a C++ program to create a function template for function  roots( )
which calculate the roots of a quadratic for integer and float
coefficients.*/
#include<iostream>
#include<cmath>

using namespace std;

template <typename t>
void root(t a,t b,t c){
    float x1,x2,real,imaginary;
    t d=(b*b - 4*a*c);

    if(d>0){
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        cout<<"Roots are real and different"<<endl;
        cout<<"x1 = "<<x1<<"\nx2 = "<<x2<<endl;
    }
    else if(d==0){
        x1=(-b/2*a);
        
        cout<<"Roots are real and same"<<endl;
        cout<<"x1=x2= "<<x1<<endl;
    }
    else{
        real=(-b/2*a);
        imaginary=sqrt(-d)/(2*a);

        cout<<"Roots are complex and different"<<endl;
        cout<<"x1 = "<<real<<" + "<<imaginary<<"i\nx2 = "<<real<<" - "<<imaginary<<"i"<<endl;
    }
}

int main()
{
    int a,b,c,ch;
    float x,y,z;

    cout<<"1)Int 2)Float\nEnter your choice: ";
    cin>>ch;

    cout<<"Enter values of a,b,c: ";
    switch(ch){
        case 1:
        cin>>a>>b>>c;
        root(a,b,c);
        break;

        case 2:
        cin>>x>>y>>z;
        root(x,y,z);
        break;

        default: cout<<"Please check the data type"<<endl;
        break;
    }

    return 0;
}