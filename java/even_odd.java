//Documentation (Write a java program to check entered number is even or odd display message accordingly)
//Package
//Import
//Interface

import java.util.Scanner;
class even_odd
{
	public static void main(String args[])
	{
		int num;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a Number:- ");
		num = sc.nextInt();
		if(num%2==0)
			System.out.println("Number is Even");
		else
			System.out.println("Number is Odd");
	}
}