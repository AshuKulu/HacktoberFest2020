import java.util.Arrays;

public class BinarySort_Quick {
	
	// Quick Approach
	public static void binarySort_Quick(int[] arr) {
		// Set pivot to 1
		int pivot = 1;
		int j = 0;
		
		// Each time a 0 is encountered, we increment j
		// 0 is placed before the pivot
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < pivot) {
				swap(arr,i,j);
				j++;
			}
		}
		
		System.out.println(Arrays.toString(arr));
	}
	// Utility function to swap 2 elements in an array
	private static void swap(int[] arr, int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	public static void main(String[] args) {
	
		int[] arr = {1, 0, 1, 0, 1, 0, 1, 1, 0, 0};

		binarySort_Quick(arr);
	}

}
