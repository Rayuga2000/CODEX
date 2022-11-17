/*Write a C++ program to update every array element by multiplication of next and
previous values of a given array of integers.*/
#include<iostream>
using namespace std;

int main()
{
    int i,n,prev,curr;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    prev=arr[0];
    arr[0]=prev*arr[1];

    for(i=1;i<n-1;i++)
    {
        curr=arr[i];
        arr[i]=prev*arr[i+1];
        prev=curr;
    }

    arr[n-1]=prev*arr[n-1];

    cout<<"New Array is=> ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}