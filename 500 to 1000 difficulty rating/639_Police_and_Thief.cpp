// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y;
	    cin >> x >> y;
	    if(x == y || x > y)
	    {
	        cout << x - y << endl;
	    }
	    else 
	    {
	        cout << y - x << endl;
	    }
	}

}
