import java.util.*;
class decimal_to_binary
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number");
        int n=sc.nextInt();
        String str="";
        int k=n;
        for(int j=0;j>=0;j++)
        {
            str=(k%2)+str;
            k=k/2;
            if(k/2==0)
            {
              str=(k)+str; 
              break;
        }
    }
        System.out.println(str);
    
}
}
             