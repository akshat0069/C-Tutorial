#include<iostream>
using namespace std;


int sum(int a, int b){
    int c=a+b;
    return c;
}
//this will not swap a and b
int swap(int a, int b){  //temp a  b
    int temp =a;          // 4  4  5
    a=b;                  // 4  5  5
    b=temp;               // 4  5  4
    return a;
}


//this will swap a and b
//********Call by refrence using pointer
int swapPointer(int*a, int*b){  //temp a  b
    int temp =*a;              // 4    4  5
    *a=*b;                     // 4    5  5
    *b=temp;                   // 4    5  4
}


//********Call by refrence using C++ refrence variables
int swapRefrence(int &a, int &b){  //temp a  b
    int temp =a;              // 4    4  5
    a=b;                     // 4    5  5
    b=temp;                   // 4    5  4
}


               
int main(){
    int x=4,y=5;
    // cout<<"the sum of 4 and 5 is "<<sum(a,b);
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;
    // swap(x,y);//this will not swap a and b;

   // swapPointer(&x,&y);//this will swap a and b using pointer refrence
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;

   swapRefrence(x,y);//this will swap a and b using refrence variable
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;

     return 0;
}