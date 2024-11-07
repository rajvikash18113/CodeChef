// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    if(x % n == 0)
	    {
	        cout << "Yes" << endl;
	    }
	    else
	    {
	        cout << "No" << endl;
	    }
	}

}
