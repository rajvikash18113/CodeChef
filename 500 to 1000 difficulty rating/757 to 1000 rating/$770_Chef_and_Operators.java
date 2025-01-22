import java.util.*;
import java.lang.*;
import java.io.*;

class $770_Chef_and_Operators
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t--> 0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if (a > b) System.out.println(">");
                else if (a < b)
                    System.out.println("<");
                else
                    System.out.println("=");

            }
            sc.close();
        }
    }