#include<iostream>

using namespace std;

class A{
    public:
    int i,j,k;

    void pattern()
    {
        for(i=1;i<5;i++)
        {
            for(j=3;j>=i;j--)
            {
                cout<<" ";
            }
            for(k=1;k<2*i;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

        for(i=1;i<=3;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<" ";
            }
            for(k=5;k>=i+(i-1);k--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

class B:public A{};
class C:public A{};
class D:public B,public C{};

int main()
{
    D d;

    d.pattern();

    return 0;
}