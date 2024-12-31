// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN

#include <bits/stdc++.h>

using namespace std;

void total_duration(int n, int a, int b)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            total += a;
        }
        else
        {
            total += b;
        }
    }
    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        total_duration(n, a, b);
    }
    return 0;
}