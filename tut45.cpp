#include <iostream>
using namespace std;
/*

student--->Test
student--->Sports
test----->result
sport----->result
*/
class Student
{
protected:
    int rollNumber;

public:
    void setNumber(int a)
    {
        rollNumber = a;
    }
    void printNumber()
    {
        cout << "your roll number is " << rollNumber << endl;
    }
};

class Test : virtual public Student
{

protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void printMarks()
    {
        cout << "your result is here " << endl
             << "maths :" << maths << endl
             << "physics :" << physics << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }

    void printScore(void)
    {
        cout << "your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{

private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "your total score is " << total << endl;
    }
};

int main()
{
    Result eric;
    eric.setNumber(40);
    eric.setMarks(90, 80);
    eric.setScore(9);
    eric.display();
    return 0;
}