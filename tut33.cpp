#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankDeposit(){};
    bankDeposit(int p, int y, float r); //r can be a value like 0.04
    bankDeposit(int p, int y, int r);   //r can be a value like 4

    void show();
};

bankDeposit ::bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

bankDeposit ::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void bankDeposit::show()
{
    cout << endl
         << "principal amount was " << principal << " . Return value after " << years << " years is " << returnValue << endl;
}

int main()
{
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p ,  y, r " << endl;
    cin >> p >> y >> r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p ,  y, R " << endl;
    cin >> p >> y >> R;
    bd2 = bankDeposit(p, y, R);//Explicit call
    bd2.show();
    return 0;
}