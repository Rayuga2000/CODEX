/*Write a C++ program to find the largest of three numbers using inline function.*/
#include<iostream>
using namespace std;

inline int max(int x,int y,int z)
{
    return (x>y)? ((x>z)? x:z):((y>z)? y:z);
}
int main()
{
    int x,y,z;

    cout<<"Enter Three Numbers: ";
    cin>>x>>y>>z;

    cout<<"The Largest Number is=> "<<max(x,y,z)<<endl;

    return 0;
}
