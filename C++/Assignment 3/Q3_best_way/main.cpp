/*Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all
0s first, then all 1s and all 2s in last.*/
#include<iostream>
using namespace std;

int i;

void sort(int arr[],int n)
{
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0: swap(arr[low++],arr[mid++]);//low and mid increased by 1 after swapping
            break;

            case 1: mid++;
            break;

            case 2: swap(arr[mid],arr[high--]);//high is decreased by 1 after swapping
            break;
        }
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

    sort(arr,n);

    cout<<"New array is=> ";
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}