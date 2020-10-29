//check if the brackets are balanced not. valid brakets{}{[[]]}, invalid brakets{], {()(}
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the isBalanced function below.
    static String isBalanced(String s) {
        char arr[]= new char[s.length()];
        int i,j, p=-1,f=0;char c;
        for(i=0;i<s.length();i++)
        {
            c=s.charAt(i);
            if(c==')'||c=='}'||c==']'){
                if(p==-1)return "NO";}
            switch(c){
                case '[': arr[++p]=c;

                    break;
                case '{': arr[++p]=c;break;
                case '(': arr[++p]=c;break;
                case '}': if(arr[p]=='{')
                                p--;
                            else{f++;
                                break;}
                    break;
                case ']': if(arr[p]=='[')p--;
                    else{ f++; break;};break;
                case ')': if(arr[p]=='(')p--;else{f++; break;};break;
            }

            if(f>0)break;
        }
        if(p==-1)return "YES";
            return "NO";



    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String s = scanner.nextLine();

            String result = isBalanced(s);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
