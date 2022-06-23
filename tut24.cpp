#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;// shared by all objects

public:
    void setData(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
        cout << id << endl;
    }

    // *************STATIC Function********
    static void getCount(void)
    {
        //cout<<id;//throws an error as 'id' is not a static variable
        cout << "the value of count is " << count << endl;
    }
};
// count is static data member of class Employee
int Employee ::count; //Default value is 0

int main()
{
    Employee eric, rohan, lavish;
    //   eric.id=1;
    //   eric.count=1;//cannot do  this as id and count are private

    eric.setData();
    eric.getData();
    Employee ::getCount();

    rohan.setData();
    rohan.getData();
    Employee ::getCount();

    lavish.setData();
    lavish.getData();
    Employee ::getCount();

    return 0;
}