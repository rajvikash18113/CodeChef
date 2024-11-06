// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if(y == 0)
        {
            cout << "YES" << endl;
        }
        else if(y % x == 0)
        {
            if((y / x) <= n)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
}
