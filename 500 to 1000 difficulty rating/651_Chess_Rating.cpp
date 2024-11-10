// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING?tab=statement
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int game = (y - x) / 8;
        if ((y - x) % 8 == 0)
        {
            cout << game << endl;
        }
        else
        {
            cout << ++game << endl;
        }

    }

}