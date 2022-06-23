#include <iostream>
using namespace std;

class student
{
protected:
     int rollNumber;

public:
     void setRollNumber(int);
     void getRollNumber(void);
};
void student ::setRollNumber(int r)
{
     rollNumber = r;
};

void student ::getRollNumber()
{
     cout << " the roll number is " << rollNumber << endl;
};

class exam : public student
{

protected:
     float maths;
     float physics;

public:
     void setMarks(float, float);
     void getMarks(void);
};

void exam ::setMarks(float m1, float m2)
{
     maths = m1;
     physics = m2;
};

void exam ::getMarks()
{
     cout << "the marks obtained in maths are " << maths << endl;
     cout << "the marks physics in maths are " << physics << endl;
};

class result : public exam
{

     float percentage;

public:
     void displayResult()
     {
          getRollNumber();
          getMarks();
          cout << " your percentage is " << (maths + physics) / 2 << "%" << endl;
     }
};

int main()
{
     /*
      If we are inheriting B from A and C from B :[A--->B---->C] then
      1. A is the base calss for B and B is the base class for C.
      2. A--->B--->C is called inheritance path.
     */
     result eric;
     eric.setRollNumber(420);
     eric.setMarks(94.0, 90.0);
     eric.displayResult();
     return 0;
     
}