// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int t = x*y;
        int bag = t / 100;
        cout << bag << endl;
    }
}
