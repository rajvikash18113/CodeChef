// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        double A, B, X, Y;
        cin >> A >> B >> X >> Y;
        double chef = A / X;
        double chefina = B / Y;
        if (chef == chefina)
            cout << "Both" << endl;
        else if(chef > chefina)

        cout << "Chefina" << endl;
        else
            cout << "chef" << endl;
    }
    return 0;
}