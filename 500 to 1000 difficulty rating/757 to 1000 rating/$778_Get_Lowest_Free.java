// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE

import java.util.*;
import java.lang.*;
import java.io.*;

class $778_Get_Lowest_Free
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t--> 0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            int min = Math.min(a, Math.min(b, c));
            int total = a + b + c;

            System.out.println(total - min);
        }

    }
}