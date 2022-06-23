#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

// EXAMPLE*************
// factorial(4) =  4 * factorial(3)
// factorial(4) =  4 * 3 * factorial(2)
// factorial(4) =  4 * 3 * *2 *factorial(1)
// factorial(4) =  4 * 3 * *2 *1;
// factorial(4) =  4;


int fib(int n){
    if(n<2)
    {
        return 1;
    }
return fib(n-2) + fib(n-1);
}
//EXAMPLE***********
// fib(5)
// fib(4)+fib(3)
// fib(3) + fab(2)  + fib(2) + fab(1)
// ----------------------
// ------------
  
int main(){
    //Factorial of a number
    // 0!=1 by defination
    // 1!=1 by defination
    // n!=n*(n-1)!
    int a,f;
    cout<<"enter a number"<<endl;
    // cin>>a;
    cin>>f;
    // cout<<"the factorial of " <<a<<" is "<<factorial(a)<<endl;
    cout<<"the term in fibonacci series at position " <<f<<" is "<<fib(f)<<endl;
     return 0;
}