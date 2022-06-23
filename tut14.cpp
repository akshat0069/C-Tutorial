 #include<iostream>
 using namespace std;

   typedef struct employee
     {
        int ID;
        char favChar;
        float salary;
     } ep;


   union money
     {
        int rice;
        char car;
        float pounds;
     } ;

 
  int main(){
   ep eric;
   struct employee shubham;
   struct employee rohan;

   eric.ID=123;
   eric.favChar='c';
   eric.salary= 120000000;

    // cout<<"the value is "<<eric.ID<<endl;
    // cout<<"the value is "<<eric.favChar<<endl;
    // cout<<"the value is "<<eric.salary<<endl;



//  union money m1;
//  m1.rice=34;
//  m1.car='c';
//  cout<<m1.rice;
//  cout<<m1.car;


enum Meal{breakfast, lunch, dinner};
Meal m1=lunch;
cout<<(m1==2);

// cout<<breakfast;
// cout<<lunch;
// cout<<dinner;





      return 0;
 }