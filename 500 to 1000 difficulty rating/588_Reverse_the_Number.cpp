// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int num;
	    cin >> num;
	    int reverse = 0;
	    while(num != 0)
	    {
	        int digit = num % 10;
	        reverse = reverse * 10 + digit;
	        num = num / 10;
	    }
	    cout << reverse << endl;
	}

}
