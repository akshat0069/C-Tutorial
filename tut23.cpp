#include <iostream>
using namespace std;
class Shop
{
    //given below are three private variables
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }; //initializing counter from 0.//makes the value of counter=0 for every object made(here object is 'dukaan')
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    // this function asks the item id and price and stores them in itemId and itemPrice array with index(counter){like i, j}
    cout << "enter id of your item number " << counter + 1 << endl; //initially counter =0 therefore +1 kiya
    cin >> itemId[counter];                                         //like itemId[i] here counter is used i.e value will be stored at index number counter
    cout << "enter price of your item number " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    //dukaan named object is made here
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    //instead of calling above function three times we can iterate loop three times
    dukaan.displayPrice();
    return 0;
}