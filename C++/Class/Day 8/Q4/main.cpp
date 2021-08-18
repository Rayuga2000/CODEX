/*Write a C++ program to create a class template for Array class
and also create two objects of Array class with two different data types.*/
#include<iostream>

using namespace std;

template<typename t>
class Array{
    int n;
    t *arr;

    public:
    Array(int n):n(n){
        arr=new t[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void show(){
        cout<<"The elements are:";
        for(int i=0;i<n;i++)
        {
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
};

int main()
{
    cout<<"Enter the int Numbers: ";
    Array<int> a1(5);
    a1.show();

    cout<<"Enter float the Numbers: ";
    Array<float> a2(5);
    a2.show();

    return 0;
}