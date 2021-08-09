/*Write a C++ program illustrating the initialization list.*/
#include<iostream>

using namespace std;

class cls{
    int y;
    public:

    cls(int x):y(x)
    {
        cout<<"Value of y = "<<y<<endl;//Value of y is assigned using initialization list
    }
};

int main()
{
    int y=20;
    cls c(y);
    return 0;
}