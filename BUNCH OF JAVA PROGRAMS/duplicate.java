import java.util.*;
class duplicate
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        int arr2[]=new int[n];
        int count=0,k=0;
        System.out.println("Enter the numbers");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            
        }
        for(int i=0;i<n;i++)
        {
            int no=arr[i];
            for(int j=0;j<n;j++)
            {
                if (no==arr[j])
                {
                    count++;
                }
            }
            if(count==1)
            {
                arr2[k++]=no;
            }
            count=0;
        }
            
        for(int i=0;i<n;i++)
        {
            System.out.println(arr2[k]);
        }
    }
}
            
        
        
        
        
