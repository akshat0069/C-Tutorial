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
 ANS. Multiple inheritance

 Q2. Which mode of inheritance are you using?
 ANS. class HybridCalculator : public calculator, public SC

 Q3. Create an object of hybrid calculator anfd display results of simple and scientific calculator

 Q4. How is code reusibility implemented

*/

class calculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }

    void performOperationsSimple()
    {

        cout << "the value of a+b is " << a + b << endl;
        cout << "the value of a-b is " << a - b << endl;
        cout << "the value of a*b is " << a * b << endl;
        cout << "the value of a/b is " << a / b << endl;
    }
};

class SC
{

    int a, b;

public:
    void getDataScientific()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }

    void performOperationsScientific()
    {

        cout << "the value of cos(a) is " << cos(a) << endl;
        cout << "the value of sin(a) is  " << sin(a) << endl;
        cout << "the value of exp(a) is " << exp(a) << endl;
        cout << "the value of tan(a) is " << tan(a) << endl;
    }
};

class HybridCalculator : public calculator, public SC
{
 
};
int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    return 0;
}