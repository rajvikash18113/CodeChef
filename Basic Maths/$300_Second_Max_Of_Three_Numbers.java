// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SNDMAX?tab=statement

import java.util.*;
import java.lang.*;
import java.io.*;

class $300_Second_Max_Of_Three_Numbers
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int[] arr = new int[3];
            for (int i = 0; i < 3; i++)
            {
                arr[i] = sc.nextInt();
            }

            Arrays.sort(arr);
            System.out.println(arr[1]);


        }
        sc.close();

    }
}