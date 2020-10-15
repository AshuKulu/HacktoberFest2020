//Documentation (Write a java program to check if number is palindrome or not)
//Package
//Import
//Interface
import java.util.Scanner;
class Palindrome
{
    public static void main(String args[])
    {
        int num, temp, rem, sum=0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a Number:-  ");
        num = sc.nextInt();
        temp = num;
        while (num > 0)
        {
            rem = num%10;
            sum = (sum * 10) + rem;
            num = num / 10;
        }
        if(temp == sum)
            System.out.println("The number is Palindrome");
        else
            System.out.println("The number is not Palindrome");
    }
}
