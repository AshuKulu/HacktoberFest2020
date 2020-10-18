import java.util.Arrays;

class BinarySearch {
    public static void main(String[] args) {
      
      int[] arr = {1,2,3,4,5,6,7,9};
      Arrays.sort(arr);
      System.out.println(binarySearch(arr, 0,arr.length-1,6));
  
    }
    
    // non recursive
    public static int binarySearch(int[] arr, int num){
  
      int n = arr.length;
      int l =0, r = n-1;
      
      while( l < n){
        int m = (l+r) / 2;
        if(arr[m] == num)
          return m;
  
        if(arr[m] < num)
          l = m+1;
        
        if(arr[m] > num)
          r = m-1;
      }
      return -1;
    }

    // recursive

    public static int binarySearch(int[] arr, int l, int r, int num){
      
      if(l<=r){
        int m = (r+l) /2;
        if(arr[m] == num)
          return m;
        
        if(arr[m] < num)
          return binarySearch(arr, m+1, r, num);
        if(arr[m] > num)
          return binarySearch(arr, l, m-1, num);                                                                                                                      

      }

      return -1;

    }

  }