// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    if(x > y)
	    {
	        cout << "CAR" << endl;
	    }
	    else if(x < y)
	    {
	        cout << "BIKE" << endl;
	    }
	    else
	    {
	        cout << "SAME" << endl;
	    }
	}

}
