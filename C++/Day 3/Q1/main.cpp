/*Write a function calculate which takes three arguments and return the result to the main function. All the arguments should be taken from the command line.*/
#include<iostream>

using namespace std;

int calculate(int a,char op,int b)
{
    switch (op)
    {
    case '+':return(a+b);
        break;
    case '-':return(a-b);
        break;
    case '*':return(a*b);
        break;
    case '/':return(a/b);
        break;
    
    default:cout<<"Something went wrong...."<<endl;
        break;
    }
}

int main(int argc,char* argv[])
{
    cout<<"Result=> "<<calculate(atoi(argv[1]),*argv[2],atoi(argv[3]))<<endl;
    //cout<<"Result=> "<<(int)*argv[1]<<" "<<*argv[2]<<" "<<(int)*argv[3]<<endl;
    return 0;
}
