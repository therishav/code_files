#include <iostream>
// An enumeration provides context to describe a range of values which are represented
// as named constants and are also called enumerators.

int main()
{
  enum Name_Choice {Mark, Greg, Jen, Chris, Vicky, Bily};
  // const int Mark = 0;

  // datatype is Name_Choice
  Name_Choice VP = Greg;

  if (VP == Greg) {
    std::cout << "Your VP's name is Greg. " << "\n";

  }

  std::cout << "Greg's value actually is " << Mark << std::endl;

  return 0;
}
