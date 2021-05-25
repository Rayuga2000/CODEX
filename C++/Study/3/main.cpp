#include<iostream>

using namespace std;

int main()
{
	int x=9,y=10;

	const int* p=&x;
	cout<<*p<<endl;
	cout<<p<<endl;

	p=&y;
	cout<<p<<endl;

	return 0;
}
