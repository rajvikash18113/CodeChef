// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SCALENE

import java.util.Scanner;

 class $430_Scalene_Triangle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            if(a != b && b != c && a != c)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
    }
}
