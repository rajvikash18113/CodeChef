// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
        {
            cout << "GOOD" << endl;
        }
        else
        {
            cout << "NOT GOOD" << endl;
        }
    }
    return 0;

}