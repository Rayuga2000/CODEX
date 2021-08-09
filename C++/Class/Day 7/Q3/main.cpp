/*Create a class called Searching and
write a friend function called search( ) to search for any element in an array.*/
#include<iostream>

using namespace std;

class Searching
{
    int arr[5];
    public:
    Searching()
    {
        cout<<"Enter five Numbers: ";
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }

    friend void search(Searching);
};

void search(Searching srch)
{
    int v;

    cout<<"Enter the value to search: ";
    cin>>v;

    for(int i=0;i<5;i++)
    {
        if(srch.arr[i]==v)
        {
            cout<<v<<" is found at position "<<i+1<<endl;
            break;
        }
    }
}

int main()
{
    Searching srch;
    search(srch);
}