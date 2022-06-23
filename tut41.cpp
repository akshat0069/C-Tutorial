#include<iostream>
using namespace std;

/*
syntax for inheriting in multiple inheritance
class Derived: visibility_mode base1, visibility_mode base2 
{
    class body of class 'derived '
};
*/

class Base1
{
protected:
int base1int;
public:

void setBase1int(int a)
{
base1int=a;
}


};

class Base2
{
protected:
int base2int;
public:

void setBase2int(int a)
{
base2int=a;
}
};

class Base3
{
protected:
int base3int;
public:

void setBase3int(int a)
{
base3int=a;
}
};


class Derived : public Base1, public Base2,public Base3
{
public:
void show(){
    cout << "the value of base1 is "<<base1int<<endl;
    cout << "the value of base2 is "<<base2int<<endl;
    cout << "the value of base3 is "<<base3int<<endl;
    cout << "the sum of  of base1, base2 and base3 is "<<base1int+base2int+base3int<<endl;
}
};

/*
the inherited derived will look something like this 
1.base1int--->protected
2.base2int--->protected
3.member functions-
     A.setBase1int()----->public
     B.setBase2int()----->public
     c. setShow()----->public
*/

int main(){
    Derived eric;
    eric.setBase1int(25);
    eric.setBase2int(5);
    eric.setBase3int(15);
    eric.show();
     return 0;
}