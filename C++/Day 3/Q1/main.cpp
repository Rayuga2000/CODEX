/*Write a function calculate which takes three arguments and return the result to the main function. All the arguments should be taken from the command line.*/
#include<iostream>

using namespace std;

float calculate(float a,char op,float b)
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
    cout<<"Result=> "<<calculate(atof(argv[1]),*argv[2],atof(argv[3]))<<endl;
    return 0;
}
