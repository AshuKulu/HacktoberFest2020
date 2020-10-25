class QuickSort 
{ 
	 
	int partition(int arr[], int min, int high) 
	{ 
		int pivot = arr[high]; 
		int i = (min-1); // index of smaller element 
		for (int j=min; j<high; j++) 
		{ 
			// If current element is smaller than or equal to pivot 
			if (arr[j] <= pivot) 
			{ 
				i++; 

				// swap arr[i] and arr[j] 
				int temp = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = temp; 
			} 
		} 

		// swap arr[i+1] and arr[high] (or pivot) 
		int temp = arr[i+1]; 
		arr[i+1] = arr[high]; 
		arr[high] = temp; 

		return i+1; 
	} 

	/* The main function that implements QuickSort() 
	arr[] --> Array to be sorted, 
	min --> Starting index, 
	high --> Ending index */
	void sort(int arr[], int min, int high) 
	{ 
		if (min < high) 
		{ 
			
			int pi = partition(arr, min, high); 

			// Recursively sort elements before partition and after partition 
			sort(arr, min, pi-1); 
			sort(arr, pi+1, high); 
		} 
	} 

	/* A function to print array of size n */
	static void printArray(int arr[]) 
	{ 
		int n = arr.length; 
		for (int i=0; i<n; ++i) 
			System.out.print(arr[i]+" "); 
		System.out.println(); 
	} 

	/* A main function */
	public static void main(String args[]) 
	{ 
		int arr[] = {15, 2, 40, 91, 45, 35}; 
		int n = arr.length; 

		QuickSort quickSort = new QuickSort(); 
		quickSort.sort(arr, 0, n-1); 

		System.out.println("sorted array"); 
		printArray(arr); 
	} 
} 
