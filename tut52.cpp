#include <iostream>
using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << " code of this item is " << id << endl;
        cout << " price of this item is " << price << endl;
    }
};
    //  1 2 3
    //      ^
    //      |
    //      |
    //     ptr
    // ptrTemp
int main()
{
    int size=3;
    // int *ptr= &size;
    //int *ptr=new int[34];

    // --------------3 objects-----
    // general store item
    // veggies item
    // hardware item

shopItem *ptr=new shopItem[size];
shopItem *ptrTemp=ptr;
int p,i;
float q;
for ( i = 0; i < size ; i++)
{
    cout<<" enter id and price of item 1 "<<endl;
    cin>>p>>q;
    // (*ptr).setData(p,q);
    ptrTemp->setData(p,q);
    ptr++;
}

for (int i = 0; i < size; i++)
{
  cout<<" Item number "<<i+1<<endl;
ptrTemp->getData();
ptr++;
}


    return 0;
}