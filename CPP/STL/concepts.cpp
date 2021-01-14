#include <iostream>
#include <cstdlib>
using namespace std;

class A
{
public:
    static int x;
    A() //constructor
    {
    }
    ~A() //destructor
    {
        x--;
    }

    void *operator new(size_t sz)
    /* new operator overloading: increment x only when
    it is called by new(dynamically allocated) operator */
    {
        x++;
    }
};

int A::x = 0;
int main()
{
    A a, b;
    A c, d, e;

    // dynamic memory allocation using malloc, and this doesn't call the class constructor
    // A *ptr = (A *)malloc(sizeof(A));
    A *ptr = new A;

    // free(ptr);
    // delete ptr;

    cout << "x: " << A::x << endl;
    // system("pause");
}
