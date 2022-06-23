#include <iostream>
using namespace std;
/*float funcAverage(int a, int b){
    float avg=(a+b)/2.0;
    return avg;
}

float funcAverage2(int a, float b){
    float avg=(a+b)/2.0;
    return avg;
}
*/

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

// -----------TO SWAP TWO NUMBERS---
template <class T>
void swapp(T &m, T &n)
{
    T temp = m;
    m = n;
    n = temp;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    cout << " the average is " << a << endl;

    int x = 5, y = 7;
    swapp(x, y);
    cout << "the value of x is " << x << endl;
    cout << "the value of y is " << y << endl;
    return 0;
}