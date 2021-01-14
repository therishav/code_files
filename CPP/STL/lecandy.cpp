
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{

    int t, n, c;

    //Get test case T from user
    cin >> t;

    // For each t
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> c; // Line 1
        int sum = 0, arr[n];
        for (int j = 0; j < n; ++j) // Line 2
        {
            cin >> arr[j];
            sum += arr[j];
        }
        // output
        if (sum > c)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}