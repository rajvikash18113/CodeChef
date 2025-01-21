
// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH?tab=statement

import java.util.*;
import java.lang.*;
import java.io.*;

class $769_Possible_Victory
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        
        
            int R = sc.nextInt();
            int O = sc.nextInt();
            int C = sc.nextInt();
            int remainingOver = 20 - O;
            int maxScore = C + remainingOver * 36;
            if(maxScore > R)
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        

	}
}
