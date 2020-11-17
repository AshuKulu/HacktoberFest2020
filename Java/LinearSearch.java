package linearsearch;

public class LinearSearch {
  
public static int search(int arr[], int x) 
{ 
    int size = arr.length; 
    for(int i = 0; i < size; i++) 
    { 
        if(arr[i] == x) 
        {
            return i; 
        }
    } 
    return -1; 
} 
  
public static void main(String args[]) 
{ 
    int arr[] = { 25,43,100,94,56};  
    int searchKey = 100; 
      
    int result = search(arr, searchKey); 
    if(result == -1) 
    {
        System.out.print("Searchkey is not found in the array");
    }
    else
    {
        System.out.print("SearchKey is found at the index " + result); 
    }
} 
} 