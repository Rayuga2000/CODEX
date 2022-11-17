#include <iostream>
using namespace std;
 
class Demo
{
public:
    Demo()        // constructor
    {
        cout << "Inside Constructor " << endl;
        exit(EXIT_SUCCESS);
    }
};
 
static Demo s;
 
int main()
{
    cout << "Inside main() - never executed";
}
