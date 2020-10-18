#include <stdio.h>

int main() 

{

 int a[10],b[10],x[10],i,j,smallest,count=0,time,n;

 double avg=0,tt=0,end;

  printf("enter the number of Processes:\n");

  scanf("%d",&n); 

 printf("enter arrival time\n");

 for(i=0;i<n;i++)

 scanf("%d",&a[i]);

 printf("enter burst time\n");

 for(i=0;i<n;i++)

 scanf("%d",&b[i]); 

 for(i=0;i<n;i++)

 x[i]=b[i];

  b[9]=9999;

  

 for(time=0;count!=n;time++)

 {

   smallest=9;

  for(i=0;i<n;i++)

  {

   if(a[i]<=time && b[i]<b[smallest] && b[i]>0 )

   smallest=i;

  }

  b[smallest]--;

  if(b[smallest]==0)

  {

   count++;

   end=time+1;

   avg=avg+end-a[smallest]-x[smallest];

   tt= tt+end-a[smallest];

  }

 }

 printf("\n\nAverage waiting time = %lf\n",avg/n);

    printf("Average Turnaround time = %lf",tt/n);

    return 0;

}
