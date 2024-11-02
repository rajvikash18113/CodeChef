// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a, b;
	    cin >> a >> b;
	    cout << endl;
	    int c,d;
	    cin >> c >> d;
	    if(a <= c && b <= d)
	    {
	        cout << "POSSIBLE" << endl;
	    }
	    else
	    {
	        cout << "IMPOSSIBLE" << endl;
	    }
	}

}
