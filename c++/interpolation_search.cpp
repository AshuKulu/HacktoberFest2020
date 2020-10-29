#include<iostream>
using namespace std;
int interpolation_search(int a[], int bottom, int top, int item)
{
int mid;
while (bottom <= top)
{
mid = bottom + (top - bottom) * (item - a[bottom]) / (a[top] - a[bottom]);
if (item == a[mid])
return mid + 1;
if (item < a[mid])
interpolation_search(a, bottom, mid-1,item);
else
interpolation_search(a, mid+1, top,item);}
return -1;
}
int main()
{
 int a[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39};
 int c=interpolation_search(a,0,19,11);
 cout<<c;
}
