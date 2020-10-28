import java.io.*;
import java.util.*;

public class radixsort {

  public static void radixSort(int[] arr) {
    //write your code here
    int max=0;
    for(int val:arr)
    {
        if(val>max)
            max=val;
    }
    
    for(int exp=1,itr=1;max/exp>0;exp*=10)
    {
        countSort(arr,exp,itr++);
    }

  }

  public static void countSort(int[] arr, int exp, int itr) {
    //write your code here
    int freq[]=new int[10];
    for(int val:arr){
        freq[(val/exp)%10]++;
    }
    for(int i=1;i<freq.length;i++)
        freq[i]+=freq[i-1];
        
    int ans[]=new int[arr.length];
    
    for(int i=arr.length-1;i>=0;i--){
        int val=(arr[i]/exp)%10;
        int idx=freq[val];
        ans[idx-1]=arr[i];
        freq[val]--;
    }
    
    for(int i=0;i<arr.length;i++){
        arr[i]=ans[i];
    }
    
    System.out.print("After iteration no. " + itr +" -> ");
    print(arr);
  }

  public static void print(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = scn.nextInt();
    }
    radixSort(arr);
    print(arr);
  }

}
