// TOPIC: std::multiset

// NOTES:
// 1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing multiset object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value.

#include <iostream>
#include <set>
using namespace std;

int main()
{
  multiset<int> multiSet = {5, 2, 4, 3, 2, 5};
  for (const auto& e : multiSet) {
      cout << e  << "\n";
    }

  return 0;
}
