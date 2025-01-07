// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << ((n % 4 == 0) ? n + 1 : n - 1) << endl;
	return 0;

}
