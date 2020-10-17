// https://bit.ly/2rcvXK5
#include  <stdio.h>  
#include <stdlib.h>
 
void gnome_sort(int *array, int size){ 
   int i, tmp; 
   for(i=1; i<size; ){
       if(array[i-1] <= array[i])
           ++i;
       else{
           tmp = array[i];
           array[i] = array[i-1];
           array[i-1] = tmp;
           --i;
           if(i == 0)
               i = 1;
       }
   }
}
 
int main(void) {
	int a[] = { 5, -1, 101, -4, 0, 1, 8, 6, 2, 3 };
	int i;
	size_t n = sizeof(a)/sizeof(a[0]);
    printf("Original Array:\n");
    for (i = 0; i < n; i++)
    printf("%d%s", a[i], i == n - 1 ? "\n" : " ");  
    printf("\nSorted Array:\n");
	gnome_sort(a, n);
	for ( i = 0; i < n; ++i)
		printf("%d ", a[i]);
	return 0;
}
