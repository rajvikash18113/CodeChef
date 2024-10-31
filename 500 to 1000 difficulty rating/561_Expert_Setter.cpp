// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        float x, y;
        cin >> x >> y;
        if (y >= (x / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}