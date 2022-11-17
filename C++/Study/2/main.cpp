#include<iostream>

using namespace std;

class student{
    private: string clg="CIS";

    public:
    int age;
    string name;

    void init(){
        cout<<"College: "<<clg <<endl;

        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
};

void display(){
    student st;
    st.init();
    
    cout<<"Name: "<<st.name <<endl <<"Age: "<<st.age <<endl;
}

int main()
{
    display();
    return 0;
}