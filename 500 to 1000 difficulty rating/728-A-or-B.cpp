// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        int total_point_AB = ((500 - X * 2) + (1000 - 4 * (X + Y)));
        int total_point_BA = ((500 - Y * 4) + (1000 - 2 * (Y + X)));
        cout << max(total_point_AB, total_point_BA) << endl;
    }
    return 0;
}