// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING

#include <bits/stdc++.h>

using namespace std;

void perfectbath(int a, int b, int x, int y)
{
    if (a < b)
    {
        if ((a + x) >= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    else if (a > b)
    {
        if ((a - y) <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else //if (a == b)
    {
        cout << "YES" << endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        perfectbath(a, b, x, y);
    }
    return 0;
}