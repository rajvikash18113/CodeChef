import java.util.*;
import java.lang.*;
import java.io.*;

class $760_Small_Factorial
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int n = sc.nextInt();
            long fact = 1;
            for (int i = 1; i <= n; i++)
            {
                fact *= i;
            }
            System.out.println(fact);
        }
        sc.close();

	}
}