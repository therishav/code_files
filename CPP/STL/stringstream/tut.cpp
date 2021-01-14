#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    stringstream ss; //stream without IO operation
    // read/write to string

    ss << 89 << " Hex: " << hex << 89 << " Oct: " << oct << 89;
    cout << ss.str() << endl;

    int a, b, c;
    string s1;

    ss >> hex >> a; // formatted input it works token by token, seperated by spaces, tabs and newlines
    // a== 137
    ss >> s1;
    ss >> dec >> b;
    ss.ignore(6);
    ss >> oct >> c;

    // ostringstream and istringstream

}
