// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM?tab=statement
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x % 3 == 0)
        {
            cout << "NORMAL" << endl;
        }
        else if (x % 3 == 1)
        {
            cout << "HUGE" << endl;
        }
        else if (x % 3 == 2)
        {
            cout << "SMALL" << endl;
        }

    }
    return 0;

}