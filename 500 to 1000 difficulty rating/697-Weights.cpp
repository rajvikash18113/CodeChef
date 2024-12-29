// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS

#include <bits/stdc++.h>
using namespace std;

void weights(int w, int x, int y, int z)
{
    if(x + y + z == w || x + y == w || x + z == w || y + z == w || x == w || y == w || z == w)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int w, x, y, z;
	    cin >> w >> x >> y >> z;
	    weights(w, x, y, z);
	}
	return 0;

}
