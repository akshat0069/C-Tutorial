#include <iostream>
#include <cmath>
using namespace std;

/*Create two classes
1. Simple calculator-->takes input of two functions using a utility function 
and performs +,-,*,/ and displays the result using another function
2. Scientific calculator--takes input of two functions using a utility function
and performs any four scientific operations of your choice.and displays the result using another function


Create another class Hybrid Calculator and inherit it using these 2 classes
 Q1. What type of inheritance are you using?
 Q2. Which mode of inheritance are you using?
 Q3. Create an object of hybrid calculator anfd display results of simple and scientific calculator
 Q4. How is code reusibility implemented
*/
int add, sub, mul, d;
class Calculator
{
protected:
    float a, b;

public:
    void setValues(float x, float y)
    {
        a = x;
        b = y;
    }

    void getValues()
    {
        add = a + b;
        sub = a < b ? b - a : a - b;
        mul = a * b;
        d = a < b ? b / a : a / b;
        cout << "the value of a+b is " << add << endl;
        cout << "the value of subtraction is " << sub << endl;
        cout << "the value of a*b is " << mul << endl;
        cout << "the value of division  is " << d << endl;
    }
};

class SC
{
protected:
    int a, b;

public:
    void setTheta(int x, int y)
    {
        a = x;
        b = y;
    }

    void getTheta()
    {

        cout << "the given value is sin(a) is " << sin(a)
             << " degree" << endl;
        cout << "the given value is sin(b)" << sin(b)
             << " degree" << endl;
        cout << "the given value is cos(a)" << cos(a)
             << " degree" << endl;
        cout << "the given value is cos(b)" << cos(b)
             << " degree" << endl;
    }
};

class Hybrid : public Calculator, public SC
{
public:
    void show()
    {
        getValues();
        getTheta();
        cout << "the values are as follows " << endl;
    }
};

int main()
{
    int a, b;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
    Hybrid eric;
    eric.setValues(a, b);
    eric.setTheta(a, b);
    eric.show();
    return 0;
}