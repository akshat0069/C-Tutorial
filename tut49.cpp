#include <iostream>
using namespace std;
/*
syntax for initialization list in constructors:

constructor(argument-list) : initialization section
{
    assignment + other code;
}


example---

*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j),a(i+b)----> this will create problems because 'a' will be initialized first
    Test(int i, int j) : a(i)

    {
        b = j;
        cout << "constructor executed " << endl;
        cout << " the value of a is " << a << endl;
        cout << " the value of b is " << b << endl;
    }
};
int main()
{
    Test t(4, 6);
    return 0;
}