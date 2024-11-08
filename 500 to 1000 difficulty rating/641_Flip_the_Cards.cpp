// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, x;
	    cin >> n >> x;
	    if(x == 0 || x == n)
	    {
	        cout << "0" << endl;
	    }
	    else if(x <= (n/2))
	    {
	        cout << x << endl;
	    }
	    else
	    {
	        cout << n - x << endl;
	    }
	}

}
 