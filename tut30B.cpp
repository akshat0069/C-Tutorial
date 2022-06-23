#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {

        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "the point is " << x << " , " << y << endl;
    }
};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    return 0;
}
//create a function(Hint: make a friend function) which takes 2 point objects and compute the distance between those points
//Distance between (1,1) and (1,1) is 0.
//Distance between (0,1) and (0,6) is 5.
//Distance between (1,0) and (70,0) is 69.