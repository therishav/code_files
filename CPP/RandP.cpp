/*
Understanding R and P values

why do we care?
1. Understand C++ construct and decypher compiler errors and warnings
2. c++ 11 introduced Rvalue reference

lvaue - An object that has a identifiable location in "memory"
rvalue - any value that is not a lvalue
 */

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    char arr[100];
    cout << "Enter name and age" << endl;

    cin.getline(arr, 100);

    ofstream myfile("xyz.txt");
    myfile << arr;
    myfile.close();
}
