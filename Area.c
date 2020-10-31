#include<stdio.h>
# define M_PI           3.14159265358979323846
int main() {
int rad;
float  area, ci;
printf("\nEnter radius of circle: ");
scanf("%d", &rad);
area = M_PI * rad * rad;
printf("\nArea of circle : %f ", area);
ci = 2 * M_PI * rad;
printf("\nCircumference: %f ", ci);
return (0);
}