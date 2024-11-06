// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SEATNUMBER
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    if(n > 0 && n <= 10)
	    {
	        cout << "Lower Double" << endl;
	    }
	    else if (n <= 15)
	    {
	        cout << "Lower Single" << endl;
	    }
	    else if (n <= 25)
	    {
	        cout << "Upper Double" << endl;
	    }
	    else
	    {
	        cout << "Upper Single" << endl;
	    }
	}

}
