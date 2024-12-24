// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x1, y1, x2, y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    int dx = abs(x1 - x2);
	    int dy = abs(y1 - y2);
	    cout << max(dx, dy) << endl;
	}
	return 0;

}
