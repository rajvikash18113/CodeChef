// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int s = n * x;
        if (s % 4 == 0)
        {
            cout << s / 4 << endl;
        }
        else
        {
            cout << (s / 4) + 1 << endl;
        }
    }
}
