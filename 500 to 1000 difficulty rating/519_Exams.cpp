// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, x, y,z;
	cin >> t;
	while(t--)
	{
	    cin >> x >> y >> z;
	    int stu = x * y;
	    if(z > (stu/2))
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}

}
