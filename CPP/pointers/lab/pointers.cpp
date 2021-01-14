// Filename: pointers.cpp

#include <string.h>
#include <iostream>
using namespace std;


struct Student
{
    string name;
    int id;
    int mark[3];
};

void inputStudent(Student* ptr);   // function prototype for inputting
                                  // function prototype for printing

//*********************** Main Function ************************//
int main ()
{
    Student stu;		  // instantiating an STUDENT object
    Student*  stuPtr = &stu;  // defining a pointer for the object

    inputStudent(&stu);	  // inputting from the keyboard into the instance
                 	  // printing the object




} // end main

//-----------------Start of functions----------------------------//

