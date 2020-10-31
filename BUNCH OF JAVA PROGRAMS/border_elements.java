import java.util.*;
class border_elements
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of 'n'");
        int n=sc.nextInt();
        int arr[][]=new int[n][n],s=0;
        System.out.println("Enter the numbers");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=sc.nextInt();
                s+=arr[i][j];
            }
        }
        int s1=0;
        System.out.println("     THE OUTPUT    ");
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
             if(i==0||i==(n-1)||j==0||j==(n-1))
             {
                 s1+=arr[i][j];
                 System.out.print(arr[i][j]);
                }
               System.out.print("     ");
            }
            System.out.println();
        }
        System.out.println("The sum of internal no.s = "+(s-s1));
    }
}
