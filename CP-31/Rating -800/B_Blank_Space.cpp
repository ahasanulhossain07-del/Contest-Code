#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count_of_zero = 0;
        int maximum_length = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                count_of_zero++;
            else
                count_of_zero = 0;
            maximum_length = max(count_of_zero, maximum_length);
        }
        cout << maximum_length << endl;
    }

    return 0;
}