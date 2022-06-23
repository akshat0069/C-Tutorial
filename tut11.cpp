#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        //    cout<<i<<endl;
        //    if(i==2){
        //        break;
        //    }

        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}