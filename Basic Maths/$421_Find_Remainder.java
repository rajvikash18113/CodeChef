// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW002

import java.util.*;
import java.lang.*;
import java.io.*;

class $421_Find_Remainder
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();

            System.out.println(a % b);
        }
        sc.close();
    }
}