#include <iostream>
using namespace std;
int glo = 6;
void sum()
{
    int a;
    cout << glo<<endl;
}
int main()
{
    int glo = 9;
    glo = 78;
    // int a=4;
    // int b=5;
    int a = 4, b = 5;
    float pi = 3.14;
    bool is_true = false;
    char c = 'u';
    sum();
    cout <<' '<<glo<<' '<< is_true;
    // cout <<"hello world .The value of a is "<<a<<".the value of b is "<<b;
    // cout <<"\n the value of pi is "<<pi;
    // cout <<"\n the value of c is "<<c;
}