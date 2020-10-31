import java.util.*;
class HalfSort 
{
int size;
int arr[];
HalfSort(int s)
{
size = s;
arr= new int[s];
}
void getArray()
{
Scanner in=new Scanner (System.in);
System.out.println("Enter"+" "+size+" "+"numbers");
for(int i = 0; i< size ; i++)
{
arr[i] = in.nextInt();
}
}
void Sort()
{
for(int i= 0; i <size/2; i++)
{
for(int j =0; j<size/2-i-1;j++)
{
if ( arr[j] > arr[j+1] )
{
int t = arr[j];
arr[j] = arr[j+1];
arr[j+1] = t;
}
} 
}
for(int i =0; i< size/2; i++)
{
for(int j =size/2; j<size-i-1; j++)
{
if ( arr[j] < arr[j+1])
{
int t1 = arr[j] ;
arr[j] = arr[j+1];
arr[j+1] = t1;
}
}
}
}
void print()
{
System.out.println("The sorted array is : ");
for(int i = 0; i < size; i++)
{
if(i==size-1)
System.out.print(arr[i] + ".");
else
System.out.print(arr[i] + ",");
}
}
public static void main(String args[])
{
Scanner in=new Scanner ( System.in);
int s1;
System.out.println("Enter an even limit");
s1 = in.nextInt();
HalfSort obj= new HalfSort(s1);
obj.getArray();
obj.Sort();
obj.print();
}
}
