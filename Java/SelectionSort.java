import java.util.Scanner;

public class SelectionSort {
    
    public static void selectionSorting(int arr[]) {
        
        int i=0;
        int minIndex=0;
        while(i<arr.length) {                  // for iterating over all the elements
            int min=arr[i];
            for(int j=i+1;j<arr.length;j++) {    //for finding minimum among remaining elements which haven't been checked
                    if(arr[j]<min) {
                        min=arr[j];
                    }
            }
            int k=0;
            while(arr[k]!=min) {      // for finding index of the minimum valued element
                minIndex++;
                k++;
            }
            while(minIndex!=i) {     // for shifting remaining elements and making space for placing minimum valued element 
                arr[minIndex]=arr[minIndex-1];
                minIndex--;
            }
        minIndex=0;
        arr[i]=min; // placing minimum valued element on that particular index
        i++;
        }
        for(int k=0;k<arr.length;k++) {
            System.out.print(arr[k]+ " ");
        }
    
    }
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the size of the array:");
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<arr.length;i++) {
			System.out.println("please enter a number:");
			arr[i]=sc.nextInt();
		}
		selectionSorting(arr);
		

	}

}
