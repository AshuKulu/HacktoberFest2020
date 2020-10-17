//create and store:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    FILE *fptr;
    char fname[20] = "test.txt";

    printf("\n\n Create a file (test.txt) and input text :\n");
    printf("----------------------------------------------\n");
    fptr = fopen(fname, "w");
    if (fptr == NULL)
    {
        printf(" Error in opening file!");
        exit(1);
    }
    printf(" Input a sentence for the file : ");
    fgets(str, sizeof str, stdin);
    fprintf(fptr, "%s", str);
    fclose(fptr);
    printf("\n The file %s created successfully...!!\n\n", fname);
    return 0;
}
