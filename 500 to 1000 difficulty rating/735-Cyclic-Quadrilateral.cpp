// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        cout << ((A + C == 180) ? "YES" : "NO") << endl;
    }
    return 0;
}