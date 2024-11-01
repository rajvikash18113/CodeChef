// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUGARCANE
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
	    int tc = x * 50;
	    
	    int expend = ((tc*20)/100 + (tc*20)/100 + (tc*30)/100);
	    cout << tc - expend << endl;
	}
    
}
