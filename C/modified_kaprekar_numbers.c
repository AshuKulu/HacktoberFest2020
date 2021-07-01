#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    int flag=0;
    for(long i=p;i<=q;i++){
        long long int num=i*i,x,y;
        if(i<=9){
            x=num/10;
            y=num-(x*10);
        }
        else if(i<=99){
            x=num/100;
            y=num-(x*100);
        }
        else if(i<=999){
            x=num/1000;
            y=num-(x*1000);
        }
        else if(i<=9999){
            x=num/10000;
            y=num-(x*10000);
        }
        else if(i<=99999){
            x=num/100000;
            y=num-(x*100000);
        }
        if(x+y==i){
            printf("%ld ",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("INVALID RANGE");
    }

}

int main()
{
    char* p_endptr;
    char* p_str = readline();
    int p = strtol(p_str, &p_endptr, 10);

    if (p_endptr == p_str || *p_endptr != '\0') { exit(EXIT_FAILURE); }

    char* q_endptr;
    char* q_str = readline();
    int q = strtol(q_str, &q_endptr, 10);

    if (q_endptr == q_str || *q_endptr != '\0') { exit(EXIT_FAILURE); }

    kaprekarNumbers(p, q);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!line) {
            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);
    } else {
        data = realloc(data, data_length + 1);

        data[data_length] = '\0';
    }

    return data;
}
