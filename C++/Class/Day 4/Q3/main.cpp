/*Write a C++ program using constructor overloading to find out sum of integer arrays 
and sum of float arrays with 5 elements.*/
#include<iostream>

using namespace std;

int i;

class myClass{
    float sum=0;

    public:
    myClass(int x[]){
        for(i=0;i<5;i++)
        {
            sum+=x[i];
        }
    }

    myClass(float y[]){
        for(i=0;i<5;i++)
        {
            sum+=y[i];
        }
    }
    void display()
    {
        cout<<"Result=> "<<sum<<endl;
    }
};

int main()
{
    int x[5];
    float y[5];

    cout<<"Enter the int Numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>x[i];
    }

    cout<<"Enter the float Numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>y[i];
    }    

    myClass cls1(x),cls2(y);

    cls1.display();
    cls2.display();

    return 0;
}