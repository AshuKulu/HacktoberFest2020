import java.util.*;
class fgh
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        int arr2[]=new int[n];
        int count,k=0;
        System.out.println("Enter the numbers");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            int m=arr[i];
            count=0;
            for(int j=0;j<=i;j++)
            {
                if(arr[j]==arr[i])
                {
                    count++;
                }
            }
            if(count>1)
            {
                continue;
            }
            else
            {
                System.out.println(m);
        }
            
    }
}
}
