/*Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all
0s first, then all 1s and all 2s in last.*/
#include<iostream>
using namespace std;

int main()
{
    int i,n,count0=0,count1=0,count2=0;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0: count0++;
            break;

            case 1: count1++;
            break;

            case 2: count2++;
            break;
        }
    }

    for(i=0;i<count0;i++)
    {
        arr[i]=0;
    }
    for(i=count0;i<count1+count0;i++)
    {
        arr[i]=1;
    }
    for(i=count0+count1;i<count1+count2;i++)
    {
        arr[i]=2;
    }

    cout<<"New array is=> ";
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}