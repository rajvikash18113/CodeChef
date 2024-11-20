// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n % m == 0)
        {
            int c = n / m;
            if (c % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
        else
        {
            cout << "NO" << endl;
        }
    }
}