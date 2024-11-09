// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2?tab=statement
#include <bits/stdc++.h>
// to use cpp_int we need to use boost library but we need to install Boost software in case to use this in our Local IDE
// while using this in online compailer no need to install anything this wil perfectly
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision;
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cpp_int fact = 1;  // cpp_int is used to handle overflow of large integer number in C++
	    for (int i = n; i >= 1; i--)
	    {
	        fact *= i;
	    }
	    cout << fact << endl;
	}
	return 0;

}
