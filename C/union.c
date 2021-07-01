#include<stdio.h>

union mix{
    int a;
    char c[4];
};

int main(){
    union mix k;
    k.c[0] = 'A';
    k.c[1] = 'B';
    k.c[2] = 'C';
    k.c[3] = 'D';
    k.a = 1024;
    //k.c[4] = 'E';
    printf("%d %d %d %d %d", k.c[0], k.c[1], k.c[2], k.c[3], k.a);
    return 0;
}