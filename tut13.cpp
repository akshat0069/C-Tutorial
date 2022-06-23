#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 245;
    mathmarks[1] = 344;
    mathmarks[2] = 245;
    mathmarks[3] = 342;
    // cout<<"these are mathmarks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // you can change the value of an array
    marks[2] = 455;
    // cout<<"these are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "the value of mathmarks " << i << " is " << mathmarks[i] << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "the value of marks " << i << " is " << marks[i] << endl;
    }

    // **************pointers and Arrays
    int *p = marks;
    // cout << *(p++) << endl;
    // cout << *(++p) << endl;
    // cout<<"the value of *p is "<<*p<<endl;
    // cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is "<<*(p+ 2)<<endl;
    // cout<<"the value of *(p+3) is "<<*(p+ 3)<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "the value of marks is " << *(p + i) << endl;
    }

    return 0;
}