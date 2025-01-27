// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS?tab=statement

import java.util.*;
import java.lang.*;
import java.io.*;

class $781_Minimum_Number_of_Flips
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                arr[i] = sc.nextInt();
                sum += arr[i];
            }

            if (sum % 2 == 0)
                System.out.println(Math.abs(sum / 2));
            else
                System.out.println("-1");
        }
        sc.close();
    }
}