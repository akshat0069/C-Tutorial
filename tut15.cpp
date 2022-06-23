#include<iostream>
using namespace std;

//Function prototype
//Type function-name(arguments);
int sum(int a, int b);
    void g(void);

int main(){
    int num1, num2;

    cout<<"enter 1st number"<<endl;
cin>>num1;

    cout<<"enter 2nd number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters 
    cout<<"the sum of num1 and num2 is "<<sum(num1, num2);
    g();
     return 0;
}
//a and b are formal parameters
int sum(int a , int b)
{
    int c=a+b;
    return c;
}

void g(){
    cout<<"\nhello, good morning";
} 