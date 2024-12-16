// https://www.codechef.com/problems/RECENTCONT?tab=statement

#include <iostream>

using namespace std;

int main()
{
    // your code goes etgrtyrtrwe
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int result1 = 0, result2 = 0;
        while (n--)
        {
            cin >> s;
            // if (s[0] == 'S')
            if (s == "START38")
            {
                result1 += 1;
            }
            else
            {
                result2 += 1;
            }
        }
        cout << result1 << " " << result2 << endl;
    }
    return 0;
}