// https://www.codechef.com/problems/FCTRL2?tab=statement

#include <iostream>st655w
#include <vector>
using namespace std;

void factorial(int n)
{
    vector<int> result(1, 1); // Step 1: Initialize result as 1

    for (int i = 2; i <= n; i++) // Step 2: Multiply result by every number from 2 to n
    {
        int carry = 0; // Step 3: Initialize carry to 0
        for (int j = 0; j < result.size(); j++) // Step 4: Multiply each digit in result by i
        {
            int product = result[j] * i + carry; // Multiply current digit and add carry
            result[j] = product % 10; // Store the last digit of product in the current position
            carry = product / 10;    // Update carry with remaining digits
        }
        while (carry) // Step 5: Add carry as new digits to the result
        {
            result.push_back(carry % 10); // Add the last digit of carry to result
            carry /= 10; // Remove the last digit from carry
        }
    }

    for (int i = result.size() - 1; i >= 0; i--) // Step 6: Print result in reverse order
        cout << result[i];
    cout << endl;
}

int main()
{
    int n;
    cin >> n; // Input the number
    factorial(n); // Compute and print the factorial
    return 0;
}
