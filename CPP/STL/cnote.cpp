#include <iostream>

bool chef_status(int p, int c, int req_pages, int k)
{
    if ((p == req_pages) && (c == k))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void print_status(bool status)
{
    if (status)
    {
        std::cout << "LuckyChef\n";
    }
    else
    {
        std::cout << "UnluckyChef\n";
    }
}

int main(void)
{
    using namespace std;
    int t, x, y, k, n, p, c;
    bool status;

    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> x >> y >> k >> n;

        int req_pages = x - y;

        for (int j = 0; j < n; ++j)
        {
            cin >> p >> c;
            status = chef_status(p, c, req_pages, k);
        }

        print_status(status);
        // cout << x << y << k << n << endl;
    }
}
