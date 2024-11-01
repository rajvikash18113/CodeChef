// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x;
	    cin >> n >> x;
	    int required_candies = (n-x);
	    if(required_candies <= 0)
	    {
	        cout << "0" << endl;
	    }
	    else if(required_candies % 4 == 0)
	    {
	        cout << required_candies / 4 << endl;
	    }
	    else
	    {
	        cout << (required_candies/4) + 1 << endl;
	    }
	    
	    
	    
	}

}
