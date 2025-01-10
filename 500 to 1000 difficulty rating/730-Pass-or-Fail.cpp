// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, P;
        cin >> N >> X >> P;
        int correctMarks = 3 * X;
        int finalMarks = correctMarks - (N - X);
        cout << ((finalMarks >= P) ? "PASS" : "FAIL") << endl;
    }
    return 0;
}