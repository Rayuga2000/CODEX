/*Write
a function that counts the number of occurrences of a pair of letters in a
string and another that does the same in a zero terminated array of char (a C
style string). For example, the pair "ab" appears twice in "ax
ab aa cb ax ab ba".*/
#include<iostream>

using namespace std;

int main()
{
    string str;
    char x;

    cout<<"Enter the String: ";
    getline(cin,str);

    cout<<"Enter the letter to search: ";
    cin>>x;

    string::iterator itr;

    for(itr=str.begin();itr!=str.end();itr++)
    {
        cout<<*itr;
    }
    return 0;
}
