// https://www.codechef.com/problems/PRACTICEPERF?tab=statement

#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] >= 10)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}