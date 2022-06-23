#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "this is me " << endl;
    out << "this is me also " << endl;
    out << "this is me here " << endl;
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout << st << st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}