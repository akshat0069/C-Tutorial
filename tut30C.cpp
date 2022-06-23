#include<iostream>
using namespace std;
#include<cmath>
class point{
 int x,y;
friend void distance(point , point);
 public:
point(int a, int b){
   x=a;
   y=b;
}

void displayPoint(){
    cout<<"the point is "<<x<<","<<y<<endl;
}
};

void distance(point o1, point o2){
    int x_diff=o2.x-o1.x;
    int y_diff=o2.y-o1.y;
    double dist = sqrt((x_diff)*(x_diff)+(y_diff)*(y_diff));
    cout<<"Distance between point A and B is "<<dist<<"units "<<endl;
}
int main(){
    point A(1,0);
    A.displayPoint();

    point B(70,0);
    B.displayPoint();

    cout<<endl;
    distance(A,B);
     return 0;
}