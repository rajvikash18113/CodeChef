// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT

import java.util.*;
import java.lang.*;
import java.io.*;

class $786_Binary_Battles
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int n = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();

            int match = 0;

            while (n > 1)
            {
                ++match;
                n /= 2;
            }
            
            int matchTime = match * a;
            int restTime = (match - 1) * b;
            System.out.println(matchTime + restTime);
        }
    }
}