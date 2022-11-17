#include<iostream>
using namespace std;

void Execute(int &x, int y = 200){
int TEMP = x + y;
x+= TEMP;
if(y!=200)
cout<<TEMP"<<x<<y<<"--";
}

int main(){
int A=50, B=20;
cout<<A<<B<<"--";
Execute(A,B);
cout<<A<<B<<"--";
return 0;
}
