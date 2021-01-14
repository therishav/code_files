#include <iostream>

using namespace std;

//creating a generic function swap using template
template <class X>
void Swap(X &a, X &b)
{
    X tp;
    tp = a;
    a = b;
    b = tp;
    cout << " Swapped elements values of a and b are  " << a << " and  " << b << " respectively " << endl;
}

int main(void)
{
    int a = 2, b = 3;
    float c = 1.25, d = 9.0;

    string
    Swap(&a, &b);
    cout << "vaalue in main a= " << a << " b= " << b << endl;
    return 0;
}