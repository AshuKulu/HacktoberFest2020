#include<stdio.h>
 
void merge(int Array[],int iterator1,int j1,int iterator2,int j2)
{
	int TemporaryArray[50];	//array used for merging
	int i,j,k;
	i=iterator1;	//beginning of the first list
	j=iterator2;	//beginning of the second list
	k=0;
	
	while(i<=j1 && j<=j2)	//while elements in both lists 
	{
		if(Array[i]<Array[j])
			TemporaryArray[k++]=Array[i++];
		else
			TemporaryArray[k++]=Array[j++];
	}
	
	while(i<=j1)	//copy remaining elements of the first list
		TemporaryArray[k++]=Array[i++];
		
	while(j<=j2)	//copy remaining elements of the second list
		TemporaryArray[k++]=Array[j++];
		
	//Transfer elements from TemporaryArray[] back to Array[]
	for(i=iterator1,j=0;i<=j2;i++,j++)
		Array[i]=TemporaryArray[j];
}
 
void mergesort(int Array[],int i,int j)
{
	int Middle;
		
	if(i<j)
	{
		Middle=(i+j)/2;
		mergesort(Array,i,Middle);		//left recursion
		mergesort(Array,Middle+1,j);	//right recursion
		merge(Array,i,Middle,Middle+1,j);	//merging of two sorted sub-arrays
	}
}
 
int main()
{
	int Array[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&Array[i]);
		
	mergesort(Array,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",Array[i]);
		
	return 0;
}