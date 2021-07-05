import java.util.Arrays;

public class BinarySort_Naive {
	
	// Naive Approach
	public static void binarySort_Naive(int[] arr) {
		
		// Iterate through the array and count the number of 0's
		int zeroes = 0;
		for(int value : arr) {
			if(value == 0) {
				zeroes++;
			}
		}
		
		// Put 0's in the beginning
		int k = 0;
		while(zeroes-- > 0) {
			arr[k++] = 0;
		}
		
		// Fill all remaining elements by 1
		while(k < arr.length) {
			arr[k++] = 1;
		}
		System.out.println(Arrays.toString(arr));
	}

	public static void main(String[] args) {
		
		int[] arr = {1, 0, 1, 0, 1, 0, 1, 1, 0, 0};
		
		binarySort_Naive(arr);		
	}

}
