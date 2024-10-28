// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_

#include<iostream>
using namespace std;

int main()
{
    int t,n,x;
    cin >> t;

    while(t--)
    {
        cin >> n >> x;
        if(n % 6 == 0)
        {
            int subs = n / 6;
            cout << subs * x << endl;
        }
        else if (n % 6 != 0)
        {
            int subs = n / 6;
            subs += 1;
            cout << subs * x << endl;
        }
        
        
    }
}

