#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main(void)
{
  char n;

  while ((n = getchar()) != '\n')
    {
      printf("%c", n);
    }
  if (n == '\n')
    {
      cout << "its a newline" << endl;
    }
  else {
    cout << "its something eles" << n << endl;
  }
}

// your code goes here
#include <iostream>
#include <vector>
#include <stdio.h>
#define print(v) for(int i=0; i<v.size(); i++) {cout << v[i] << endl;}
#define printMvec(x) for(int i=0; i<x.size(); i++) {for(int j=0; j<x[i].size(); j++) {cout << x[i][j] << " ";}cout << '\n';}
using namespace std;

int main(void)
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //print(v);

    vector<vector<int>> v2 = {{1, 2, 3}, {3, 4}, {5, 6, 7, 6}};
    v2[0].push_back(10);
    // printMvec(v2);
    //cout << v2[2].size();

    char c;
    int n, q;
    vector<vector<int>> arr; //multidimen vector

    n = getchar();
    //check if newline and run loop
        while ((n = getchar()) != '\n')
        {

        }
    if (n == '\n')
    {
        cout << "its a newline" << endl;
    }
    else {
        cout << "its something eles" << endl;
    }
    //Ask user for n(no of var-len-arrays) and q(no of queries)
    // cin >> n >> q;

    //for each i of n, ask user for the array as input
    // for(int i=0; i<n; i++)
    // {
    //  //check if newline and run loop
    //  while ((c = gecthar()) != '\n')
    //  {

    //  }
        // }


}
