// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        double a, x, b, y;
        cin >> a >> x >> b >> y;
        auto alice_speed = a / x;
        auto bob_speed = b / y;
        if (alice_speed == bob_speed)
            cout << "Equal" << endl;
        else if (alice_speed > bob_speed)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}