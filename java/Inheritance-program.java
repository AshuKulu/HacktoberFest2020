// Inheritance Program


import java.util.Scanner;

class a 
{
	Scanner sc = new Scanner(System.in);
	int l;
	void getl()
	{
		System.out.println("Enter length");
		l=sc.nextInt();
		
	}
}
class b extends a
{   int b;
	void getb(){
	
	System.out.println("Enter bredth");
	b=sc.nextInt();
	}
}

class inherit extends b
{
	void area()
	{
		System.out.println("Area = "+(l*b));
	}
	public static void main(String arg[])
	{
		inherit obj = new inherit();
		obj.getl();
		obj.getb();
		obj.area();
	}
}
