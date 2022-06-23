
//OOP's-------->Classes and Objects
// class--------->Extension of structures
//Structures had limitations
//  ---->members are public
//no methods

// classes--->structures+more
// classes ---->can have methods(functions) and properties(values)
//classes---->can make few members as private and few as public
//structure--->in C++ are typedef(ie. typedef na likho to bi chlega)

/*you can declare objects along with class declaration like this
                 class Employee{
                     class defination
                 }eric, harry,rohan; */

//  eric.salary----->makes no sense if salary is private

// ***************NESTING OF MEMBER FUNCTION*********

#include <iostream>
#include <string>
using namespace std;
class binary
{

    string s; //by default class members are private

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();//nesting of members function (ie member function  within a  member function )
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "display your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}