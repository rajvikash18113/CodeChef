// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CCHOCOLATES

import java.util.Scanner;

class $405_Chef_and_Chocolates {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t--> 0) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int z = scanner.nextInt();
            System.out.println(((x * 5) + (y * 10)) / z);
        }
        scanner.close();
    }
}

