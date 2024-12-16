// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes her
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = 0;
        if (x > 0)
        {
            a = z * (x / 3);
            if (x % 3 == 0)
            {
                a -= z;
            }
        }


        cout << (x * y) + a << endl;


    }
    return 0;
}