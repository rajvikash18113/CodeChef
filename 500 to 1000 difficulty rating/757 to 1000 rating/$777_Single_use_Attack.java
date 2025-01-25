// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE

import java.util.*;
import java.lang.*;
import java.io.*;

class $777_Single_use_Attack
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int h = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();

            int remaining_health = h - y;

            if (remaining_health % x == 0)
                System.out.println((remaining_health / x) + 1);
            else
                System.out.println((remaining_health / x) + 2);
        }
        sc.close();
    }
}