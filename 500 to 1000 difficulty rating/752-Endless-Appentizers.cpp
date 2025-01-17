// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int X, Y, R;
	    int extra = 0;
	    cin >> X >> Y >> R;
	    if(R != 0)
	    {
	        extra = R / 30;
	    }
	    
	    int total_sticks = X + extra;
	    
	    if(total_sticks % Y == 0)
	    cout << total_sticks / Y << endl;
	    else
	    cout << (total_sticks / Y) + 1 << endl;
	}
	return 0;

}
