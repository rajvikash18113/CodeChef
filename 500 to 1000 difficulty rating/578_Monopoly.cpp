// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int p, q, r , s;
        cin >> p >> q >> r >> s;
        if((p+q+r) < s || (p+q+s) < r || (p+r+s) < q || (q+r+s) < p)
        {
            cout << "YES" << endl;
        }
        else
        cout << "NO" << endl;
    }
}
