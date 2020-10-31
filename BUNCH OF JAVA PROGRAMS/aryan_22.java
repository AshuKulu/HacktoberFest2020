
import java.util.*;
class aryan_22
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence");
        String str=sc.next()+" ";
        char ch;
        String w="";
        int l=str.length();
        
        for(int i=0;i<l;i++)
        {
            ch=str.charAt(i);
            if(ch!=' ')
            {
                if(ch=='A')
                ch='E';
                if(ch=='E')
                ch='I';
                if(ch=='I')
                ch='O';
                if(ch=='O')
                ch='U';
                if(ch=='U')
                ch='A';
            }
            else
            {
                str+=w;
                w="";
            }
            System.out.println(str);
        }
    }
}


                
                
           