#include <iostream>
using namespace std;

//Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
    Employee(){};
};

//Derived class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc;
    NOTE:
    1 Default visibility mode is private
    2. Public Visibility Mode--->Public members of base class becomes public members of Derived class
    3.Private Visibility Mode--->Public members of base class becomes private members of Derived class
    4. Private members of base class are never inherited 
}*/

//Creating a programmer class derived from Employee base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
        salary = 50;
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee eric(1), harry(2);
    cout << "id of eric is " << eric.id << endl;
    cout << "salary of eric is " << eric.salary << endl;
    cout << "id of harry is " << harry.id << endl;
    cout << "salary of harry is " << harry.salary << endl;

    Programmer skillF(10);
    cout << "language of skillF is " << skillF.languageCode << endl;
    cout << "id of skillF is " << skillF.id << endl;
    cout << "salary of skillF is " << skillF.salary << endl;
    //skillF.id<<endl;//as this is inherited as private(by default )therefore
    skillF.getData();
    return 0;
}