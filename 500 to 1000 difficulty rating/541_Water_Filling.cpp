// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        if ((b1+b2+b3) <= 1)
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
        
    }
}




