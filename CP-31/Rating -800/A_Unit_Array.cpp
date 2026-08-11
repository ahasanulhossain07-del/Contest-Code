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
        int positive_count = 0;
        int negative_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                positive_count++;
            else
                negative_count++;
        }
        int operation = 0;
        while (positive_count < negative_count || negative_count % 2 == 1)
        {
            operation++;
            positive_count++;
            negative_count--;
        }
        cout << operation << endl;
    }

    return 0;
}