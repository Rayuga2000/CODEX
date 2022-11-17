/*Design classes such that they support the following statements:
Dollar d1, d2; Rupee r1, r2;
Write a complete program which does such conversions according to the
world market value. Take $1 = Rupee 60 as a conversion factor*/
#include<iostream>

using namespace std;

class Dollar{
    public:
    int x;

    Dollar(){}

    Dollar(int x){
        this->x=x;
    }
};
class Rupee{
    public:
    int x;

    Rupee(){}

    Rupee(int x){
        this->x=x;
    }
};

int convert(Dollar &d){
    return(d.x*60);
}
float convert(Rupee &r){
    return(r.x/60);
}

int main()
{
    Dollar d(1);
    Rupee r(60);

    cout<<d.x<<"$"<<" = "<<"Rs."<<convert(d)<<endl;
    cout<<"Rs."<<r.x<<" = "<<convert(r)<<"$"<<endl;

    return 0;
}