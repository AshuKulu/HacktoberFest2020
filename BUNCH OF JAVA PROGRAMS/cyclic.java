import java.util.*;
class cyclic
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of numbers");
        int n=sc.nextInt();
        int arr[]=new int [n];
        int temp;
        System.out.println("Enter the numbers");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            
        }
        for(int i=0;i<n-1;i++)
        {
            temp=arr[i];
            arr[i]=arr[n-1];
            arr[n-1]=temp;
        }
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]);
        }
            
    }
}
