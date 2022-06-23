#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "how are you " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kese ho " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};
// -----------------example 2----------------------------------
class B
{
public:
    int a;
    void say()
    {
        cout << "hello world " << endl;
    }
};

class D : public B
{
    int a;
    //D's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "hello everyone " << endl;
    }
};
int main()
{

    //Ambiguity 1-------------------
    // Base1 base1obj;
    // base1obj.greet();
    // Base2 base2obj;
    // base2obj.greet();

    // Derived d;
    // d.greet();

    //Ambiguity 2----------------

    B b;
    b.say();

    D d;
    d.say();
    return 0;
}