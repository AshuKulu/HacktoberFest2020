import java.util.*;

public class PeakElementInArray{
    private static int getPeakElement(int[] arr, int start, int end){
        int mid =(start+end)/2;
        if((mid+1)>=end){
            return arr[mid];
        }
        if((mid-1)<start){
            return arr[start];
        }
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
            return arr[mid];
        }
        if(arr[mid-1]<arr[mid]){
            return getPeakElement(arr,mid+1,end);
        }else{
            return getPeakElement(arr,start,mid-1);
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of elements : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter all the elements . ");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int res = getPeakElement(arr,0,arr.length);
        System.out.println("The value of peak element in the array is : " + res);
    }
}