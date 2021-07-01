#include<stdio.h>

struct Distance{
    int inch, feet;
};

void add(struct Distance l1, struct Distance l2){
    l1.feet = l1.feet + l2.feet + (l1.inch + l2.inch) / 12;
    l2.inch = (l1.inch + l2.inch) % 12;
    printf("\nFeet = %d, inch = %d",l1.feet, l1.inch);
}

int mian(){
    struct Distance d1 = {100, 30};
    struct Distance d2 = {20, 20};
    printf("Distance 1");
    printf("\nFeet = %d, inch = %d",d1.feet, d1.inch);
    printf("\nDistance 2");
    printf("\nFeet = %d, inch = %d",d2.feet, d2.inch);
    add(d1, d2);
    return 0;
}