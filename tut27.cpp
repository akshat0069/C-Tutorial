#include <iostream>
using namespace std;
//Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    void sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};

class complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int calculator ::sumRealComplex(complex o1, complex o2); //calculator class ke sumRealComplex function ko apna data de do
    // friend int calculator ::sumImgComplex(complex o1, complex o2);

    //Declaring the entire calculator as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber(void)
    {
        cout << " your number is " << a << " + " << b << "i" << endl;
    }
};

void calculator ::sumRealComplex(complex o1, complex o2)
{
    cout << "the sum of real part of o1 and o2 is " << (o1.a + o2.a) << endl; //o1.a means o1 ka a
}

int calculator ::sumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;

    //to use below two lines make return type int in line 14 ,therefore kuch return hoga
    // int res = calc.sumRealComplex(o1, o2);
    // cout << "the sum of real part of o1 and o2 is " << res << endl;

    calc.sumRealComplex(o1, o2);

    int resImg = calc.sumImgComplex(o1, o2);
    cout << "the sum of imagionary part of o1 and o2 is " << resImg << endl;
    return 0;
}