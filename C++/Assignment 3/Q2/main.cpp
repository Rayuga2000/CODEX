/*Write a C++ program to rearrange the elements of a given array of integers in zig-
zag fashion way.*/
#include<iostream>
using namespace std;

int i;

void zigzag(int arr[],int n)
{
    bool flag=true;

    for(i=0;i<n-1;i++)
    {
        if(flag)
        {
            if(arr[i]<arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        else
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        flag=!flag;
    }
}

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    zigzag(arr,n);

    cout<<"New array is=> ";
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}