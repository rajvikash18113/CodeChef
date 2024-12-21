// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, k, m;
	    cin >> n >> k >> m;
	    int c = k * m;
	    cout << ((n % c == 0) ? n/c : (n/c) + 1) << endl;
	}
	return 0;

}
