#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); //Constructor declaration

    void printNumber(void)
    {
        cout << " your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y) //----->this is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    //implicit call
    complex A(4, 6);
    A.printNumber();

    //Explicit call
    complex B = complex(5, 7);
    B.printNumber();

    return 0;
}