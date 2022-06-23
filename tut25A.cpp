#include<iostream>
using namespace std;
    class Employee{

int id;
int salary;

public:
void setId(void){
    salary=122;
    cout<<"enter id of employee"<<endl;
    cin>>id;
}


void getId (void){
    cout<<"the id of this employee is "<<id<<endl;

}
    };


int main(){
// Employee eric, rohan, lavish, harry;
// eric.setId();
// eric.getId();

// rohan.setId();
// rohan.getId();

// lavish.setId();
// lavish.getId();

// harry.setId();
// harry.getId();

Employee fb[4];
for (int i = 0; i < 4; i++)
{
   fb[i].setId();
   fb[i].getId();
}


     return 0;
}