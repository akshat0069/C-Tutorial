// there are two types of header files:
// 1. system header files: It comes with compiler
#include <iostream>

// 2. User defined header files: It is written by the programmer
// #include"this.h"---> This will produce an error if this.h is not present in current directory

using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "operators in c++" << endl;
    cout << "Following are the types of operators in c++" << endl;

    //Arithmetic operators
    cout << "Following are the types of Logicaloperators in c++" << endl;
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of b/a is " << b / a << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of ++a is " << ++a << endl;
    cout << "the value of --a is " << --a << endl;
    cout << endl;

    // Assignment operators(use to assign values to variables)
    // int a=3,b=4;
    // char d='d';

    //Comparision operators
    cout << "Following are the types of Comparision operators in c++" << endl;
    cout << "the value of a==b is " << (a == b) << endl;
    cout << "the value of a!=b is " << (a != b) << endl;
    cout << "the value of a>b is " << (a > b) << endl;
    cout << "the value of a<b is " << (a < b) << endl;
    cout << "the value of a<=b is " << (a <= b) << endl;
    cout << "the value of a>=b is " << (a >= b) << endl;
    cout << endl;

    //Logical operators
    cout << "Following are the types of Logical operators in c++" << endl;

    cout << "the value of (&&) logical AND operator ((a==b) && (a<b)) is " << ((a == b) && (a < b)) << endl;
    cout << "the value of logical OR(||) operator ((a==b) || (a<b)) is " << ((a == b) || (a < b)) << endl;
    cout << "the value of logical NOT (||) operator (!(a==b) ) is " << (!(a == b)) << endl;

    return 0;
}