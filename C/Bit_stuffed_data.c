// data communiction and networking Bit Stuffed data algorithm implemented
#include "stdio.h"
int main()
{
int i=0,c=0;
char data[100];
printf("Enter the data: ");
scanf("%s",data);
printf("\nBit Stuffed Data \n");
printf("01111110");
for(i=0;data[i]; i++)
{
    if(data[i]=='1')
        c++;
    else
        c=0;
printf("%c",data[i]);
if(c==5)
    {
        printf("0");
        c=0;
    }
}
printf("01111110");
return 1;
}
