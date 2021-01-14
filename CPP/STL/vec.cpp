// TOPIC: std::vector

// NOTES:
// 1. std::vector is a sequence container and also known as Dynamic Array or Array List.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

// vector is a linked list + array
// what is the difference betwwen resize and reserve

#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> Vec;
  Vec.reserve(31);
  for(int i=0; i<32; i++) {
    Vec.push_back(i);
    cout <<  "Size: " << Vec.size() << " " << "Capacity: " << Vec.capacity()  << "\n";
  }
  return 0;

}
