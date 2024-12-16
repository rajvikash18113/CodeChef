// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK

#include <bits/stdc++.h>
using namespace std;

int blackjack(int a, int b)
{
    int x = 21-(a+b);
    if(x <= 10 && x >= 1)
    {
        return x;
    }
    return -1;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a, b;
	    cin >> a >> b;
	    cout << blackjack(a, b) << endl;
	}
	return 0;

}
