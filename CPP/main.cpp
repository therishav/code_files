// pointers are extreamly important for managing and manipulating computer memory
// pointers stores an address of a type.

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    //void purest of pointer(it is typeless), hence the adress stored in a void pointer
    // doesnot refer to any particular type of data.
    void* ptr = NULL; //0 is not a valid mem address.
}