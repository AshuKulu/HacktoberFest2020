class QuickSort{
	public void QuickSort(int[] A, int start, int end){
		
		if(start<end){
			int pIndex = Partition(A, start, end);
			QuickSort(A, start, pIndex-1);
			QuickSort(A, pIndex+1, end);
		}
	}
	
	public int Partition(int[] A, int start, int end){
		
		int pivot = A[end];
		int pIndex = start;
		for(int i=start;i<end;i++){
			if(A[i]<=pivot){
				int temp = A[i];
				A[i] = A[pIndex];
				A[pIndex] = temp;
				pIndex++;
			}
			
		}
		
		int temp = A[pIndex];
			A[pIndex] = A[end];
			A[end] = temp;
		
		
		return pIndex;
	}
}

class UseQuickSort{
	public static void main(String args[]){
		int[] A = {3, 6, 978, 67, 7, 7};
		QuickSort q = new QuickSort();
		q.QuickSort(A, 0, 5);
		for(int i=0;i<6;i++){
			System.out.println(A[i]);
		}
	}
}