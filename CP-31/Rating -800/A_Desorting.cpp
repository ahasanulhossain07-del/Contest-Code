#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long operation = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                long long diff = a[i + 1] - a[i];
                long long req_operaion = diff / 2 + 1;
                operation = min(operation, req_operaion);
            }
            else
                operation = 0;
        }
        cout << operation << endl;
    }

    return 0;
}