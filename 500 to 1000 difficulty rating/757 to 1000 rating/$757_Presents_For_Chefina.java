import java.util.*;

class $757_Presents_For_Chefina
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
