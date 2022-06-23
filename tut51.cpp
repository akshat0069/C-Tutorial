#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void getData()
    {
        cout << "the real part is " << real << endl;
        cout << "the img part is " << img << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        img = b;
    }
};

int main()
{
    // complex c1;
    // complex *ptr=&c1;
    complex *ptr = new complex;

    //(*ptr).setData(1,54);//OR same as c1.setData(1,54);//  is exactly same as
    ptr->setData(1, 54);

    // (*ptr).getData();//same as c1.getData();// is exactly same as
    ptr->getData();

    // Array of objects ----------------------------------
    complex *ptr1 = new complex[4];
    ptr1->setData(1, 4);
    ptr1->getData();
    return 0;
}