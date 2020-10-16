//merge sort algorithm
#include<stdio.h>

int temp[20];
void mergeSort(int *a,int left,int right);
void merging(int *a,int low,int mid,int high);
int main(){
    int input[20],count,i;
    printf("Enter the count of inputs= ");
    scanf("%d",&count);
    printf("Enter the inputs= ");
    for(i=0;i<count;i++){
        scanf("%d",&input[i]);
        fflush(stdin);
    }
    mergeSort(input,0,count-1);
    printf("Sorted list= ");
    for(i=0;i<count;i++){
        printf("%d ",input[i]);
    }
    return 0;
}

void mergeSort(int *a,int left,int right){
   int mid;
   if(left<right){
      mid=(left+right)/2;
      mergeSort(a,left, mid);
      mergeSort(a,mid+1,right);
      merging(a,left,mid,right);
   }
   else
      return;
}

void merging(int *a,int low,int mid,int high){
   int l1,l2,i;
   for(l1=low,l2=mid+1,i=low;l1<=mid && l2<=high;i++){
      if(a[l1]<=a[l2])
         temp[i]=a[l1++];
      else
         temp[i]=a[l2++];
   }

   while(l1<=mid)
      temp[i++]=a[l1++];

   while(l2<=high)
      temp[i++]=a[l2++];

   for(i=low;i<=high;i++)
      a[i]=temp[i];
}

