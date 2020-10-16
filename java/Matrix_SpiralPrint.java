import java.util.*;

class Main
{ 
   static void spiralPrint(int m, int n, int a[][])
    {
        int i, k = 0, l = 0;
 
        while (k < m && l < n) {
            // Print the first row from the remaining rows
            for (i = l; i < n; ++i) {
                System.out.print(a[k][i] + " ");
            }
            k++;
 
            // Print the last column from the remaining
            // columns
            for (i = k; i < m; ++i) {
                System.out.print(a[i][n - 1] + " ");
            }
            n--;
 
            // Print the last row from the remaining rows */
            if (k < m) {
                for (i = n - 1; i >= l; --i) {
                    System.out.print(a[m - 1][i] + " ");
                }
                m--;
            }
 
            // Print the first column from the remaining
            // columns */
            if (l < n) {
                for (i = m - 1; i >= k; --i) {
                    System.out.print(a[i][l] + " ");
                }
                l++;
            }
        }
    }
      
    // Driver code 
    public static void main (String[] args) 
    { 
        Scanner scn = new Scanner(System.in);
        int N = scn.nextInt();
        int M = scn.nextInt();

        int[][] A = new int[N][M];
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                A[i][j]=scn.nextInt();
            }
        }
      
        spiralPrint(N, M, A);
    } 
} 