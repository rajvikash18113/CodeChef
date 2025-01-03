// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        if (100 * x >= n)
            cout << "0" << endl;
        else
        {
            int rem = n - (100 * x);
            if (rem % 100 == 0)
                cout << rem / 100 << endl;
            else
                cout << (rem / 100) + 1 << endl;
        }
    }
    return 0;
}

