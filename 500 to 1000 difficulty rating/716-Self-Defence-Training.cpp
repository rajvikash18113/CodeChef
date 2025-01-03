// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 60 && arr[i] >= 10)
                count++;
        }
        cout << count << endl;
    }
    return 0;

}