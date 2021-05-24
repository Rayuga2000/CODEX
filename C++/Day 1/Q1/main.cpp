/*Write a program that prints out the letters ‘a’....’z’ and the digits ‘0’....’9’ and their ASCII values using recursion.*/
#include<iostream>
using namespace std;

void number(char c)
{
	if(c<='9')
	{
		cout <<c <<" = " <<(int)c <<endl;
		number(c+1);
	}
}
void alphabet(char c)
{
	if(c<='z')
	{
		cout <<c <<" = " <<(int)c <<endl;
		alphabet(c+1);
	}
}

int main()
{
	cout <<"Numbers" <<endl;
	number('0');
	cout <<"Alphabets:" <<endl;
	alphabet('a');

	return 0;
}
