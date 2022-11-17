/*Write a function that counts the number of occurrences of a pair of letters in a
string and another that does the same in a zero terminated array of char 
(a C style string).For example, the pair "ab" appears twice in "ax ab aa cb ax ab ba".*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str,x;
    int y=-1,occur=0;

    cout<<"Enter the String: ";
    getline(cin,str);

    cout<<"Enter the pair to search: ";
    cin>>x;

    while(1)
    {
        y=str.find(x,y+1);

        if(y!=-1)
        {
            occur++;
        }
        else
        {
            break;
        }
    }

    cout<<x<<" occured "<<occur<<" times \n";

    return 0;
}
