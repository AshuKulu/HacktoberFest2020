import java.util.Scanner;

public class fibonacci {

    public static int FibonacciDC(int x) {
        if (x <= 0 || x <= 1) {
            return x;
        } 
        else {
            return FibonacciDC(x - 2) + FibonacciDC(x - 1);
        }
    }

    public static void FibonacciBF(int x) {
        long fib[] = new long[x];

        fib[0] = 0;
        fib[1] = 1;

        for (int i = 2; i < x; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        for (int i = 0; i < x; i++) {
            System.out.print(fib[i] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        System.out.println();
        System.out.print("enter the number of the Fibonacci sequence = ");
        n = sc.nextInt();
        System.out.println();

        System.out.print("Fibonacci with Brute Force Algorithm : ");
        FibonacciBF(n);
        System.out.println();

        System.out.print("Fibonacci with Divide and Conquer Algorithm : ");
        for (int i = 0; i < n; i++) {
            System.out.print(FibonacciDC(i) + " ");
        }
        System.out.println();
    }
}
