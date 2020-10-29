import java.io.*;
import java.lang.*;

class insertionsort{
    public static void main(String args[]){
        // Creating an Array
        int i;
        int arr[] = {78,43,3,21,112};
        System.out.println("Array before insertion sort: ");
        for( i = 0; i<arr.length; i++) {
            System.out.print(" "+arr[i]);
        }
        for ( i = 1; i < arr.length; ++i) { 
            int key = arr[i]; 
            int j = i - 1; 
  
            /* Move elements of arr[0..i-1], that are 
               greater than key, to one position ahead 
               of their current position */
            while (j >= 0 && arr[j] > key) { 
                arr[j + 1] = arr[j]; 
                j = j - 1; 
            } 
            arr[j + 1] = key; 
        } 
        System.out.println();
        System.out.println("Array after Insertion Sort");
        for( i = 0; i<arr.length; i++){
            System.out.print(" "+arr[i]);
        }
    }
}