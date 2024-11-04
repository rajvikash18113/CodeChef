// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    if((x-1) < (100 - x))
	    {
	        cout << "LEFT" << endl;
	    }
	    else
	    {
	        cout << "RIGHT" << endl;
	    }
	}

}
