// TOPIC: Map In C++

// NOTES:
// 1. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 2. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 3. It store key value pair in sorted order on the basis of key (assending/decending).
// 4. std::map is generally used in Dictionay type problems.


#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  // map<string, int> Map;
  // Map["Chotu"] = 1;
  // Map["Amit"] = 2;
  // Map.insert(make_pair("Bot", 3));

  // for (auto& e : Map) {
  //   cout << e.first << " " << e.second  << "\n";
  // }
  // // acess using [] operator
  // cout << Map["Chotu"] << endl;

  // vector inside a map as a value
  map<string, vector<int>> Map;
  Map["Chotu"].push_back(1);
  Map["Amit"].push_back(2);
  Map["Amit"].push_back(23);

  // loop through the map
  for (auto &el1 : Map) {
    cout << el1.first << ": ";
    for (auto &e2 : el1.second) {
      cout << e2 << " ";
    }
    cout << endl;
  }


  return 0;
}
