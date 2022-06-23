#include <iostream>
using namespace std;

template <class T>
class Eric
{
public:
    T data;
    Eric(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Eric<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "i am 1st func() " << a << endl;
};
template <class T>
void func(T a)
{
    cout << "this is templatized  func() " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "this is  func1() " << a << endl;
}
int main()
{
    // Eric<float> e(5.7);
    // Eric<char> e('c');
    // Eric<int> e(5);
    // cout<<e.data<<endl;
    //   e.display();

    func(4); //exact match takes highest priority
    func(4.5);
    func1(4);
    return 0;
}