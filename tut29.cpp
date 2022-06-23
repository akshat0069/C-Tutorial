#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //creating a constructor member
    //it is used to initialize the object of its class
    //it is automatically invoked whenever an object is created

    complex(void); //Constructor declaration

    void printNumber(void)
    {
        cout << " your number is " << a << " + " << b << "i" << endl;
    }
};

//constructor define kiya h
complex ::complex(void) //----->this is a default constructor as it takes no parameter
{
    a = 0;
    b = 0;
}

int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

/*Properties*********
1. It should be declared in the public section of class 
2. They are automatically invoked whenever the object is created (as their name is same as class name)
3. They cannot return values and Do not have return types
4. It can have default arguments 
5. We cannot refer to their address  
*/
