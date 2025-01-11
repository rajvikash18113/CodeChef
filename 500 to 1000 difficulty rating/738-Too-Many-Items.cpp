// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLYBAGS

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if (N % 10 == 0)
        {
            cout << N / 10 << endl;
        }
        else
        {
            cout << (N / 10) + 1 << endl;
        }
    }
    return 0;
}