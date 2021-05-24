/*Define a table of the
names of months of the year and the number of days in each month. Do this
twice; once using an array of char
for the names and an array of integer for the number of days and
once using an array of structures, with each structure
holding the name of a month and the number of days in it. Write out that table
using two functions.*/
#include<iostream>

using namespace std;

string months[12]={"January","February","March","April","May","June",
"July","August","September","October","November","December"};

int dates[12]={31,29,31,30,31,30,31,31,30,31,30,31},i;

typedef struct month_date
{
    string month[1];
    int date[1];
}month_date;

void func1()
{
    cout<<"Using char array and int array=>\n"<<endl;
    for(i=0;i<12;i++)
    {
        cout<<months[i]<<" : "<<dates[i]<<"\n";
    }
}

void func2(month_date* md)
{
    for(i=0;i<12;i++)
    {
        md[i].month[0]=months[i];
        md[i].date[0]=dates[i];
    }

    cout<<"\nUsing structure array=>\n"<<endl;
    for(i=0;i<12;i++)
    {
        cout<<md[i].month[0]<<" : "<<md[i].date[0]<<"\n";
    }
}
int main()
{
    month_date md[12];
    func1();
    func2(md);
    return 0;
}
