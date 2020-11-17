/*Find and Replace*/


import java.util.Scanner;
public class P2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the string:");
		String sen = sc.nextLine();
		System.out.println("Enter the word to be searched:");
		String search = sc.nextLine();
		System.out.println("Enter the word to be replaced:");
		String replace = sc.nextLine();
		sc.close();
		char ch[] = sen.toCharArray();
		int count=0;
		for(int i=0;i<ch.length;i++)
		{
			int c = ch[i];
			if((c>=65&&c<=90) || (c>=97&&c<=122) || c==32 || c==46)
				count++;
		}
		if(count == sen.length())
		{
		if(sen.contains(search))
		{
			sen = sen.replaceAll(search, replace);
			System.out.println(sen);
		}
		else
		{
			System.out.println("The word "+search+" not found");
		}
		}
	}
}
