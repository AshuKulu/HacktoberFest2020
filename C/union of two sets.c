#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20]={1,2,3,4,5};
    int b[20]={7,3,4,1,8,1};
    int c[20]={};
    int i,j,n,m,k;
    // clrscr();
    printf("Enter size of A:");
    scanf("%d", &n);
    // for (i=0;i<n;i++)
    // {
    //     printf("Enter elements of A:");
    //     scanf("%d", &m);
    // }
    printf("Enter size of B:");
    scanf("%d", &m);
    // for (i=0;i<m;i++)
    // {
    //     printf("Enter elements of B:");
    //     scanf("%d", &b[i]);
    // }
    
    //Merging
    (n>m)?k=n:k=m;
    // for(i=0,j=0;i<k,j<k;i++,j++)
    // {
    //     if (a[i]==b[j])
    //         c[i]=a[i];
    // }
    // k=i;  //SIZE OF C
    // printf("%d",k);

    // //SORTING
    // int temp=0;
    // for(i=0;i<k;i++)
    // {
    //     for(j=i;j<k;j++)
    //     {
    //         if(c[i]>c[j])
    //         {
    //             temp=c[i];
    //             c[i]=c[j];
    //             c[j]=temp;
    //         }
    //     }
    // }
    // for(i=0;i<m+n;i++)
    // {
    //     printf("%d ",c[i]);
    // }
    // //DELETION
    // for(i=0;i<k;i++)
    // {
    //     for(int a=0;a<k;a++)
    //     {
    //         if(c[i]==c[i+1])
    //     {
    //         for(j=i;j<k;j++)
    //         {
    //             c[j+1]=c[j+2];
    //         }
    //         k--;
    //     }
    //     }
    // }
    // //PRINT C
    // printf("\n C Array: \n");
    // for(i=0;i<k;i++)
    // {
    //     printf("%d ",c[i]);
    // }
    return 0;
}