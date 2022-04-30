#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end){
    int temp;

    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n,i;

    cout<<"Enter the Range: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the Numbers: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The array is: ";
    for(i=0;i<n;i++){
        cout<<arr[i]+" ";
    }
    cout<<endl;

    //reverse(arr,0,n-1);

    /*cout<<"The reversed array is: ";
    for(i=0;i<n;i++){
        cout<<arr[i]+" ";
    }
    cout<<endl;*/

    return 0;
}