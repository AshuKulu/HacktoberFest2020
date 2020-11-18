//author pruthviraj jadhav
import java.util.Arrays;
 
import static java.lang.String.format;
 
public class InsertionSortExample {
 
    public static void main(String[] args) {
        int arr[] = { 32, 19, 41, 9, 15 };
        System.out.println(format("Input Array: %s\n", Arrays.toString(arr)));
        sort(arr);
        System.out.println(format("\nSorted Array: %s\n", Arrays.toString(arr)));
 
    }
 
    private static void sort(int arr[]) {
        int n = arr.length;
        for (int i = 1; i < n; ++i) {
            int value = arr[i];
            int j = i - 1;
 
            // Move elements that are greater than key, to one position ahead of their current position.
            while (j >= 0 && arr[j] > value) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = value;
            System.out.println(format("Iteration: %s, Output: %s", i, Arrays.toString(arr)));
        }
    }
}
