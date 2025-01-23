// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A

import java.util.*;
import java.lang.*;
import java.io.*;

class $777_Mutated_minions
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    
	    while(t-- > 0)
	    {
	        int count = 0;
	        int n = sc.nextInt();
	        int k = sc.nextInt();
	        int[] arr = new int[n];
	        
	        for(int i = 0; i < n; i++)
	        {
	            arr[i] = sc.nextInt();
	        }
	        
	        for(int i = 0; i < n; i++)
	        {
	            arr[i] += k;
	        }
	        
	        for(int i = 0; i < n; i++)
	        {
	            if(arr[i] % 7 == 0)
	            count++;
	        }
	        
	        System.out.println(count);
	        
	    }
	}
}
