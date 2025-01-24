// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST

import java.util.*;
import java.lang.*;
import java.io.*;

class $777_Reach_Fast
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int k = sc.nextInt();

            int distance = Math.abs(a - b);

            if (a == b)
                System.out.println("0");
            else if (distance % k == 0)
                System.out.println(distance / k);
            else
                System.out.println((distance / k) + 1);

        }
        sc.close();
    }
}