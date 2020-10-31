import java.io.*;
class Binary
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        int pos = 0;
        int ar[] = new int[10];
        System.out.println("Enter the Numbers");
        for(int i = 0;i<10;i++)
        {
            ar[i] = Integer.parseInt(in.readLine());
        }
        int search;
        System.out.println("Enter the Search Number");
        search = Integer.parseInt(in.readLine());
        int l = 0,u = 9,mid;
        while(l<=u)
        {
            mid = (l+u)/2;
            if(ar[mid]>search)
            u = mid-1;
            else if(ar[mid]<search)
            l = mid+1;
            else
            {
                pos = mid+1;
                break;
            }
        }
        if(pos==0)
        System.out.println(search+" is Not Present");
        else
        System.out.println(search+" is present at "+pos+" Position");
    }
}
