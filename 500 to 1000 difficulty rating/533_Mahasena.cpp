// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
#include <iostream>
using namespace std;

int main()
{
    int n_army;
    cin >> n_army;       // Number of Soldier
    int myArray[n_army]; // Array to Count the Number of Weapon to the Soldier
    int even_count = 0;  // count of Soldier who has even number of weapopn
    int odd_count = 0;   // Count of Soldier who has odd number of weapon

    // Reads Weapon Count for each Soldier
    for (int i = 0; i < n_army; i++)
    {
        cin >> myArray[i];
    }

    // Read Count of Even and Odd numbers of Weapon to the Soldier
    for (int i = 0; i < n_army; i++)
    {
        if (myArray[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    // Checks Soldiers are ready for Battle or Not
    if (even_count > odd_count)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }
    return 0;
}