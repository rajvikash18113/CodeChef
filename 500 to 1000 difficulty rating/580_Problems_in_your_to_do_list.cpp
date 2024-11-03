// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int count = 0;
	    int n;
	    cin >> n;
	    int myArr[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> myArr[i];
	    }
	    for(int j = 0; j < n; j++)
	    {
	        
	        if(myArr[j] >= 1000)
	        {
	            count++;
	        }
	    }
	    cout << count << endl;
	    
	}

}
