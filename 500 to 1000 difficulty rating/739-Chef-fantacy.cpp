// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FIZZBUZZ2303

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        cout << N * (N - 1) << endl;
    }
    return 0;
}