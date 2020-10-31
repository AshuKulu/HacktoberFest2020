import java.util.*;
class first
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println(" Enter a sentence in uppercase");
        String str=sc.next();
        str=str.toUpperCase();
        char ch;
        String word="JAKA";
        for(int i=0;i<str.length();i++)
        {
            ch=str.charAt(i);
            if(ch==' ')
            {
                System.out.print(word.charAt(0));
                
                
            }
            if(ch!=' ')
            {
                word+=ch;
            }
        }
    }
}
        
            
        