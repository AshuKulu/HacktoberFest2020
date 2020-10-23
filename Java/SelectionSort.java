import java.util.Arrays;
import java.util.Scanner;

class SelectionSort {

    public static void selectionSorting(int[] arr) {
        // Run n iterations, each iteration moving the smallest element to the front
        for (int i = 0; i < arr.length; i++) {
            // Find the index of the smallest element
            int min_index = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }

            // Swap location of front with min_index
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Please enter a number:");
            arr[i] = sc.nextInt();
        }

        selectionSorting(arr);
        System.out.println(Arrays.toString(arr));
    }
    
}
