#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A & setData(int a)
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }

    void getData()
    {
        cout << " the value of a is " << a << endl;
    };
};

int main()
{
    //'This' is a keywork which is a  pointer which points to the object which invokes the member function
A a;
a.setData(4);
a.getData();
// a.setData(4).getData();
    return 0;
}