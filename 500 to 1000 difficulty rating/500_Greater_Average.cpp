// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float A, B, C;
        cin >> A >> B >> C;
        float aver = (A + B) / 2;
        if (aver > C)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


    }
}