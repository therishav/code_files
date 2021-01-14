#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int n, q;
  cin >> n >> q;

  vector<int> arr[n];

  int k;
  for(int i = 0; i < n; i++)
    {
      cin >> k;
      for(int j = 0; j < k; j++)
        {
          int val;
          cin >> val;
          arr[i].push_back(val);
        }
    }

  for(int i = 0; i < q; i++)
    {
      int arr_i, j;
      cin >> arr_i >> j;
      cout << arr[arr_i][j] << '\n';
    }

  return 0;
}
