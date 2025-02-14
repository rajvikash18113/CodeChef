// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR?tab=statement

#include <bits/stdc++.h>

using namespace std;

string searchelement(int x, int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return "YES";
    }
    return "NO";
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << searchelement(x, arr, n) << endl;
    return 0;

}