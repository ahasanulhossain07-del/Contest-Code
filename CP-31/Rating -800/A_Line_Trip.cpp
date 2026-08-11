#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> point_arr;
        point_arr.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int point;
            cin >> point;
            point_arr.push_back(point);
        }
        point_arr.push_back(x);
        n = point_arr.size();
        int max_distance = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                max_distance = max(max_distance, 2 * (point_arr[i] - point_arr[i - 1]));
            }
            else
            {
                max_distance = max(max_distance, point_arr[i] - point_arr[i - 1]);
            }
        }

        cout << max_distance << endl;
    }

    return 0;
}