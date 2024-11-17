// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE

#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        if ((n * x) < k)
        {
            cout << n << endl;
        }
        else if ((n * x) > k)
        {
            cout << (k / x) << endl;
        }
    }
    return 0;
}