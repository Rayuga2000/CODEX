#include<iostream>

using namespace std;

int execute()
{
    cout<<"Inside Execute";
    exit(EXIT_SUCCESS);
}

static int s=execute();

int main()
{
    cout<<"Inside Main";
    return 0;
}
