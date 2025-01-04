// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y, d;
	    cin >> x >> y >> d;
	    cout << (abs(x - y)<= d ? "Yes" : "No") << endl;
	}
	return 0;

}
