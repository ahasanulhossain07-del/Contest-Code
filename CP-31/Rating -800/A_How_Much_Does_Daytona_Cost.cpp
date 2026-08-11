#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == k)
                flag = 1;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}