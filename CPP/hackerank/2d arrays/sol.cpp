#include <iostream>
#define print(myarray) for(int elem : myarray) {cout << elem << "\n";}

using namespace std;

int main(void) {

  int myarray[3] = {10, 20, 30};

  for (int i = 0; i < 3; ++i)
    {
      ++myarray[i];
    }

  print(myarray);



}
