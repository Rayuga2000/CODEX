/*Define a macro Cube1(a) in C++ and call it from main( ) with long and integer argument.*/
#include<iostream>
using namespace std;

#define Cube1(a) (6*a*a)

int main()
{
    long x=50000000;
    int y=5000;

    cout<<"Area of Cube 1 is=> "<<Cube1(x)<<endl;
    cout<<"Area of Cube 2 is=> "<<Cube1(y)<<endl;

    return 0;
}
