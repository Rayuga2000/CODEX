/*Write a program to calculate factorial of a given number using copy constructor.
Declare the class name as Copy with data members and member functions.
Create a constructor Copy( ) with argument to assign the value.
Define a function calculate( ) to find out the factorial.*/
#include<iostream>

using namespace std;

class copy{
    int x;

    public:
    copy(){}

    copy(int x){
        this->x=x;
    }

    copy(copy &c){
        this->x=c.x;
    }

    int calculate(){
        int f=1;

        while(x>0)
        {
            f=f*x;
            x--;
        }

        return f;
    }
};

int main()
{
    int x;

    cout<<"Enter the Number: ";
    cin>>x;

    class copy c1(x),c2(c1);

    cout<<"Factorial of "<<x<<" is=> "<<c2.calculate()<<endl;

    return 0;
}