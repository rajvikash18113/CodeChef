// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int first =  a * (100 / 10);
        int second  = b * (100 / 20);
        if (first > second)
        {
            cout << "FIRST" << endl;
        }
        else if (first < second)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }

}