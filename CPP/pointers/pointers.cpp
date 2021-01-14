#include <iostream>
using namespace std;

int main(void)
{
    /* // ex 1
    int SomeArray[10]; // Each int is 4 bytes hence this array uses 4*10 = 40bytes of memory

    int *pLocation6 = &SomeArray[6]; // pLocation6 stores the adress of 6th element of array
    int *pLocation0 = &SomeArray[0]; // pLocation0 stores the adress of first element of array

    cout << "pLocation6: " << (int)pLocation6 << endl;
    cout << "pLocation0: " << (int)pLocation0 << endl;
    cout << "Difference: " << pLocation6 - pLocation0 << endl; // Why does this outputs 6
    // whereas we can see the difference between each pointers as 24 when we print them individualy
    */

    /* // ex 2
    int SomeArray[10] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};

    int *pLocation0 = SomeArray; // This is same as int* pLocation0 = &SomeArray[0];

    for (int i = 0; i < 10; i++)
    {
        cout << SomeArray + i << " = " << *(SomeArray + i) << endl;
    }
    */

    /* 
    // ex 3
    // chars and *chars quite commonly means that you are reffereing to strings so
    // some functions are expecting functions and will react differently according to the type of pointer it recieves
    char SomeString[] = "Hello";

    char *pSomeString = SomeString;

    cout << "pSomeString = " << pSomeString << endl; //prints the string stored in char array

    char *pLocation3 = &SomeString[3];
    char *pLocation0 = &SomeString[0];

    cout << "pLocation3: " << pLocation3 << endl;
    cout << "pLocation0: " << pLocation0 << endl;
    cout << "Difference: " << pLocation3 - pLocation0 << endl;
    */

    // ex4
    struct sSomeObject
    {
        int x = 0xA3A2A1A0;
        int y = 0xB2B2B1B0;
    };

    // Stack allocation (compile time)
    // sSomeObject pSomeObject[10];

    // Heap (run time)
    sSomeObject *pSomeObject = new sSomeObject[10];

    // An array of pointers allocated at runtime
    // sSomeObject **pSomeObject = new sSomeObject *[10] { 0 };

    for (int i = 0; i < 10; i++)
    {
        pSomeObject[i] = new sSomeObject();
    }

    // delete array of pointers
    for (int i = 0; i < 10; i++)
    {
        delete pSomeObject[i];
    }

    delete[] pSomeObject;

    // ex5
    return 0;
}
