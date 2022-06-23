#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    // For loop in C++

    // Syntax for For loop

    // for(initialization; condition;updation)
    // {
    // loop body(C++ code)
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //    cout<<i<<endl;
    // }

    //****WHILE loop
    // Syntax for WHILE loop
    // while ( condition )
    // {
    //     C++ statements
    // }

    // while(i<=40){
    // cout<<i<<endl;
    // i++;
    // }

    //****DO WHILE loop
    // Syntax for DO WHILE  loop
    // do
    // {
    //     C++ statements
    // }while ( condition );

    // do {
    // cout<<i<<endl;
    // i++;
    // }while(i<=40);

    //**********table of x
    int k;
    cout << "enter your number " << endl;
    cin >> k;
    for (int j = 1; j <= 10; j++)
    {
        cout << k << " * " << j << "=" << k * j << endl;
    }

    return 0;
}
