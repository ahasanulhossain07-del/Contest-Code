#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (n <= 3)
        {
            int cost = n * x;
            cout << cost << endl;
        }
        else
        {
            int cost = 3 * x + (n - 3) * y;
            cout << cost << endl;
        }
    }

    return 0;
}