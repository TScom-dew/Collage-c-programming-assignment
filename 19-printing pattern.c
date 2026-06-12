#include <stdio.h>

int main()
{

    // pattern 1
    printf("\nPattern-01:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // pattern -02
    printf("\nPattern -02\n");
    for (int i = 5; i >0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // pattern -03

    printf("\npattern -03:\n");

    for (int i = 0; i < 5; i++)
    {
        for (int sp = 0; sp <= i; sp++)
        {
            printf(" ");
        }
        for (int j = 5; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }


     // pattern 4
     printf("\nPattern-04:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }


    return 0;
}