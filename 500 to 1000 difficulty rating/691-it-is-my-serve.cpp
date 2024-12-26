// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        int total = p + q + 1;
        if (total % 4 == 1 || total % 4 == 2)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}