#include<iostream>
using namespace std;

inline int product(int a ,int b){
    //not recommended to use below two lines with inline function
    // static int c=0;// this executes only ones
    // c=c+1;//next time this function will run , value if c will be retained
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){
return currentMoney*factor;
}



// int strlen(const char *p){

// }


 int main(){
    int a,b;
    // cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    // cout<<"product of a and b is "<<product(a,b)<<endl;;
    // cout<<"product of a and b is "<<product(a,b)<<endl;;
    // cout<<"product of a and b is "<<product(a,b)<<endl;;
 int money=100000;
    cout<<"if you have "<<money<<"rs in your bank account, you will receive "<<moneyReceived(money)<<" after 1 year"<<endl;
    cout<<"For VIP: if you have "<<money<<"rs in your bank account, you will receive "<<moneyReceived(money,1.1)<<" after 1 year"<<endl;
  
  
     return 0; 
}