// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW006

import java.util.*;
import java.lang.*;
import java.io.*;

class $455_Sum_Of_Digit {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            System.out.println(sum);
        }

    }
}
