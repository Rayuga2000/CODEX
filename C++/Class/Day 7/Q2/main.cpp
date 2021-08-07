#include<iostream>

using namespace std;

void print(){
    cout<<"1st"<<endl;
}
void print(int){
    cout<<"2nd"<<endl;
}

int main()
{
    print();
    print(1);
    return 0;
}