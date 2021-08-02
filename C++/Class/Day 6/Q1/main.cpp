/*Create a class Clock having private data members hour and minute in integer.
A default constructor should initialize the data to 0. Overload it with parameterized constructor.
A member function should enter the data and another should display time in 10:37
format. A final member function should receive two objects, add them and store
the result to the invoking object. Write an appropriate main () function.*/
#include<iostream>

using namespace std;

class Clock{
    int hour,minute;

    public:
    Clock(){
        hour=0;
        minute=0;
    }
    Clock(int x,int y){
        hour=x;
        minute=y;
    }

    Clock operator+(Clock &c2){
        int tmp=0;
        Clock c3;

        c3.minute=minute+c2.minute;
        if(c3.minute>=60){
            c3.minute-=60;
            tmp++;
        }

        c3.hour=hour+c2.hour+tmp;

        return c3;
    }

    void showData(){
        cout<<"The Time is=> "<<hour<<":"<<minute<<endl;
    }
};

int main()
{
    Clock c1(5,25),c2(2,56),c3;
    c1.showData();
    c2.showData();
    c3=c1+c2;
    c3.showData();

    return 0;
}
