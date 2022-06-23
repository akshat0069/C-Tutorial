#include <iostream>
using namespace std;

class number
{

    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }

    // when no copy constructor is found  compiler supplies its own copy constructor to every class
    number(number &obj)
    {
        cout << "copy constructor called !!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z or x or y
    number z1(x); //copy constructor invoked
    z1.display();

    z2 = z; //Copy constructor not called, because we have assigned 'z' in already made (z2) object
    z2.display();

    number z3 = z; //copy constructor invoked(called), because  we have assigned 'z' in  (z3) whis was not made
    z3.display();
    return 0;
}