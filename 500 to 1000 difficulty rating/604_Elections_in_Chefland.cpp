// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  t;
	cin >> t;
	while(t--)
	{
	    int nPeople, minAge;
	    int count = 0;
	    cin >> nPeople >> minAge;
	    int arr[nPeople];
	    for(int i = 0; i < nPeople; i++)
	    {
	        cin >> arr[i];
	    }
	    for(int j = 0; j < nPeople; j++)
	    {
	        if(arr[j] >= minAge)
	        {
	            count++;
	        }
	    }
	    cout << count << endl;
	    
	}

}
