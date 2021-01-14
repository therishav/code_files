// your code goes here
/*

#include <iostream>

using namespace std;

//funtion which adds two ints
T add(T a, T b)
{
  return a + b;
}

//funtion which adds two floats
float add(float a, float b)
{
  return a + b;
}

// using templates
template <typename T>
T add(T a, T b)
{
  return a + b;
}

T main(void)
{
  T a = 10;
  T b = 20;
  cout << add<T>(a, b) << endl;

  float x = 10.2;
  float y = 20.6;
  cout << add<float>(x, y)  << "\n";

  return 0;
}
*/

// ex 2 normal class
/*
#include <iostream>
using namespace std;

class Something
{
public:
  T a[2];
  T add();
  Something();
};

Something::Something()
{
  cin >> a[0] >> a[1];
}

T Something::add()
{
  return a[0] + a[1];
}

T main(void)
{
  Something intSomething;
  cout << intSomething.add() << endl;
}
*/


// above program using templates
#include <iostream>
using namespace std;

template <class T>
class Something
{
public:
  T a[2];
  T add();
  Something();
};

template <class T>
Something<T>::Something()
{
  cin >> a[0] >> a[1];
}

template <class T>
T Something<T>::add()
{
  return a[0] + a[1];
}

int main(void)
{
  Something<float> intSomething;
  cout << intSomething.add() << endl;
}
