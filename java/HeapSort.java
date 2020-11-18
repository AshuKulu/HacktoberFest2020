import java.util.Scanner;

public class HeapSort{
    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        int n;
        n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        
        heapSort(arr, n);

        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
        System.out.println();     
    }

    public static void heapSort(int[] arr, int n){
        for(int i=n/2-1;i>=0;i--){
            heapify(arr, n, i);
        }
    
        for(int i=n-1;i>0;i--){
            //Move root element to end of heap
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
    
            //Heapify the remaining heap i.e. i elements starting with root element
            heapify(arr, i, 0);
               
        }
    }

    public static void heapify(int[] arr, int n, int i){
        int largest = i;
        int l=2*i+1;
        int r=2*i+2;

        if(l<n && arr[l]>arr[largest])
            largest=l;
        if(r<n && arr[r]>arr[largest])
            largest=r;
        
        //swap if largest!=i
        if(largest!=i){
            int temp=arr[i];
            arr[i]=arr[largest];
            arr[largest]=temp;

            heapify(arr, n, largest);
        }    
    }
}