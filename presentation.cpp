#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int slides_made = n * 30;
    int remaining_time = (600 - slides_made);
    int remaining_slides = remaining_time / 30;
    cout << remaining_slides << endl;

    return 0;
}