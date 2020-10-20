#include<stdio.h>
void main()
{
  struct marks
  {
     int sub[3],total;
  };
  struct marks student[3]={45,60,76,75,34,68,87,66,56,43,65,23};
  struct marks total;
  int i,j;
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      student[i].total += student[i].sub[j];
      total.sub[j] += student[i].sub[j];
    }
    total.total += student[i].total;
  }
  printf("student  total\n\n");
  for(i=0;i<=2;i++)
      printf("student[%d]    %d\n",i+1,student[i].total);
  for(j=0;j<=2;j++)
     printf("subject=%d     %d\n",j+1,total.total);
  printf("\ngrand total = %d\n",total.total);   
}
