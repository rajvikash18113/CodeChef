// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        if(M == 0)
        {
            cout << 2*N << endl;
        }
        else if(N > M)
        {
            cout << (N-M) + N << endl;
        }
        else
        cout << N << endl;
    }
    return 0;
}