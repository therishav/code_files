#include <set>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> const arr) {
  for (unsigned int i = 0; i < arr.size(); i++) {
    std::cout << arr.at(i) << " ";
  }
  cout << endl;
}

void vec() {
  //STL

  vector<int> A = {11, 2, 3, 14};
  cout << A[1] << endl;

  sort(A.begin(), A.end()); // O(Nlogn)

  print(A);

  vector<int>::iterator it3;

}


void setDemo() {

  set<int> S;
  S.insert(1);
  S.insert(2);
  S.insert(3);
  S.insert(-1);
  S.insert(-10);

  for (int i : S) {
    cout << i << " ";
  }
  cout << std::endl;
}

int main() {

  setDemo();
}
