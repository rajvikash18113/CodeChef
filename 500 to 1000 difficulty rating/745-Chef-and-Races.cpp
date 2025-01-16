// https://www.codechef.com/problems/CHEFRACES

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;
        int point = 2;
        if (X == A || X == B)
            point--;
        if (Y == A || Y == B)
            point--;
        cout << point << endl;
    }
}