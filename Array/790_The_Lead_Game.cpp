// https://www.codechef.com/problems/TLG?tab=statement

#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int player1[n], player2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> player1[i] >> player2[i];
    }

    int commulative1 = 0, commulative2 = 0;
    int maxLead = 0;
    int winner = 0;

    for (int i = 0; i < n; i++)
    {
        commulative1 += player1[i];
        commulative2 += player2[i];

        int currentLead = abs(commulative1 - commulative2);
        int currentLeader = (commulative1 > commulative2) ? 1 : 2;

        if (currentLead > maxLead)
        {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }
    cout << winner << " " << maxLead << endl;
    return 0;
}