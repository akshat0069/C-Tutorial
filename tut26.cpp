#include <iostream>
using namespace std;
class complex
{
    int a, b;
    //below line means non member -->sumComplex function is allowed to do anything with  my members
    friend complex sumComplex(complex o1, complex o2);

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
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum; //C1 AND C2 are two variables of complex datatype
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*Properties of friend function
1. Not in the scope of class 
2. since it is not in the scope of class , it cannot be called 
from the object of that class i.e. c1.sumComplex()== invalid
3. Can be invoked without help of any object
4. Usually  contains objects as arguments 
5. Can be declared inside public or private section of class
6. It cannot access the members directly by their name and need 
object_name.member_name to access any member  


*/