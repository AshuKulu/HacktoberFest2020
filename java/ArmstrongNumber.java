
import java.util.Scanner;

public class Armstrong {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter the no. - ");
        long n=in.nextInt();
       long sum=0,res,temp=n;
        while(n>0){
            res=n%10;
            sum=sum+(res*res*res);
            n=n/10;           
        }
       if(temp==sum){
            System.out.println("Armstrong");
        }else{
            System.out.println("Not Armstrong");
        }
       in.close();
    }

}
