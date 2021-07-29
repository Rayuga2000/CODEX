#include<iostream>

using namespace std;

int i;

class myClass{
    int sum=0;
    float sum2=0;

    public:
    myClass(int arr){
        for(i=0;i<5;i++)
        {
            sum+=arr[i];
        }
    }

    myClass(float ar){
        for(i=0;i<5;i++)
        {
            sum2+=ar[i];
        }
    }
};

int main()
{
    int x[5];
    float y[5];

    cout<<"Enter the int Numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>x[i];
    }

    cout<<"Enter the float Numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>y[i];
    }

    myClass cls1(x),cls2(y);

    return 0;
}