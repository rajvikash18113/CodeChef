// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS

import java.util.*;

class Codechef
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
        while(t-- > 0)
        {
            int N = sc.nextInt();
            int result = (N / 5) * 4 + (N % 5);
            System.out.println(result);
        }
        sc.close();
	}
}
