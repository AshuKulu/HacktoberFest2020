#include <stdio.h>
    void main()
    {

        int i, j, a, n, no[50];
        printf("Enter total number of numbers to be arranged in ascending order: \n");
        scanf("%d", &n);

        printf("Enter the numbers to be arranged in ascending order:\n");
        for (i = 0; i < n; ++i)
            scanf("%d", &no[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (no[i] > no[j])
                {

                    a =  no[i];
                    no[i] = no[j];
                    no[j] = a;

                }

            }

        }

        printf("The numbers arranged in ascending order are: \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", no[i]);

    }
