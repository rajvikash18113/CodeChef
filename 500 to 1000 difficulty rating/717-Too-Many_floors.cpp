// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int fx, fy;
        int x, y;
        cin >> x >> y;
        if (x % 10 == 0)
            fx = x / 10;
        else
            fx = (x / 10) + 1;

        if (y % 10 == 0)
            fy = y / 10;
        else
            fy = (y / 10) + 1;

        cout << abs(fx - fy) << endl;

    }
    return 0;
}