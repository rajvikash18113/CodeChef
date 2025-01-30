// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2

import java.util.*;
import java.lang.*;
import java.io.*;

class $789_Best_Of_Two
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int[] arr = new int[6];
            for(int i = 0; i < 6; i++)
            {
                arr[i] = sc.nextInt();
            }
            
            int[] aliceRolls = {arr[0], arr[1], arr[2]};
            int[] bobRolls = {arr[3], arr[4], arr[5]};
            
            Arrays.sort(aliceRolls);
            Arrays.sort(bobRolls);
            
            int aliceScore = aliceRolls[1] + aliceRolls[2];
            int bobScore = bobRolls[1] + bobRolls[2];
            
            if(aliceScore > bobScore)
                System.out.println("Alice");
            else if(bobScore > aliceScore)
                System.out.println("Bob");
            else
                System.out.println("Tie");
            
        }

	}
}
