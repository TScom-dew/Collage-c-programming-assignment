#include <stdio.h>

int main()
{
    float a = 0, b = 0;

    printf("Finding greatest numbers:\n");
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (a > b)
    {
        printf("\nGreatest number= %.2f\n", a);
    }
    else if (a < b)
    {
        printf("\nGreatest number= %.2f\n", b);
    }
    else
    {
        printf("\nBoth numbers are equal\n");
    }


    //;
    printf("\nSuccessfully completed.\n\n");

    return 0;
}