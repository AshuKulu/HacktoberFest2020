import java.util.Arrays;

public class BinarySort_Comparison {
	
	// Comparison Approach
	public static void binarySort_Compare(int[] arr) {
		
		// Store the index of next available free index
		int k = 0;
		
		// Compare every element to 0 and if it matches, fill the next available index with a 0.
		for (int value : arr) {
			if (value == 0) {
				arr[k++] = 0;
			}
		}
		
		// Fill the rest of the array with 1's
		for (int i = k; i < arr.length; i++) {
			arr[i] = 1;
		}
		
		System.out.println(Arrays.toString(arr));
	}

	public static void main(String[] args) {
		
		int[] arr = {1, 0, 1, 0, 1, 0, 1, 1, 0, 0};
		
		binarySort_Compare(arr);
	}

}
