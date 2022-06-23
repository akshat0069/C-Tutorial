#include <iostream>
#include<string>
#include <fstream>
/*The  useful classes for working with files in c++ are:
1.  fstreambase
2.  ifstream--> Derived from fstreambase
3.  ofstream--> Derived from fstreambase
*/

/*
In order to work with files in C++ , you will have to open it . 
There are primirally two ways to open a file :
1. Using the constructor.
2. Using the member function open() of the class
*/

using namespace std;

int main()
{
    string st = "eric negi";
    string st2;

    // Opening files using Constructor and writing to it
    ofstream out("sample60.txt"); // Write operation
    out << st;
    cout << st << endl;

    // Opening files using Constructor and reading it
    ifstream in("sample60b.txt"); // reading  operation
    //in>>st2;
    getline(in, st2);
    cout << st2 << endl;
    return 0;
}