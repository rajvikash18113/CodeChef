// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND?tab=statement

#include<iostream>
#include<string>

using namespace std;

char getcomplement(char c)
{
    if (c == 'A') return 'T';
    else if (c == 'T') return 'A';
    else if (c == 'C') return 'G';
    else if (c == 'G') return 'C';
    return 0;
}

int main() {
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, result = "";
        cin >> n >> s;
        for (char c: s)
        {
            result += getcomplement(c);
        }
        cout << result << endl;
    }

    return 0;

}