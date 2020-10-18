import java.util.*;
import java.util.Deque;
import java.util.LinkedList;

class sliding {

    static void printKMax(int a[], int n, int k)
    {
        // If k = 1, print all elements
        if (k == 1) {
            for (int i = 0; i < n; i += 1)
                System.out.print(a[i]+ " ");
            return;
        }

        // Using p and q as variable pointers
        // where p iterates through the subarray
        // and q marks end of the subarray.
        int p = 0,
                q = k - 1,
                t = p,
                max = a[k - 1];

        // Iterating through subarray.
        while (q <= n - 1) {

            // Finding max
            // from the subarray.
            if (a[p] > max)
                max = a[p];

            p += 1;

            // Printing max of subarray
            // and shifting pointers
            // to next index.
            if (q == p && p != n) {
                System.out.print(max+ " ");
                q++;
                p = ++t;

                if (q < n)
                    max = a[q];
            }
        }
    }

    public static void main (String[]args)
        {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter length of array you want to initialize");
            int n = sc.nextInt();
            int a[] = new int[n];
            System.out.println("Enter Array Elements one by one");
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            System.out.println("Enter Size of Sliding Window");
            int K = sc.nextInt();

            printKMax(a, n, K);
        }

}