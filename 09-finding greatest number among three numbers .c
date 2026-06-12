#include <stdio.h>

int main()
{
    float a = 0, b = 0, c = 0;
    
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter three number: ");
    scanf("%f", &c);

    
    if (a > b)
    {
        if (a > c)
        {
            printf("\nGreatest number= %.2f\n", a);
        }
        else
        {
            printf("\nGreatest number= %.2f\n", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("\nGreatest number= %.2f\n", b);
        }
        else
        {
            printf("\nGreatest number= %.2f\n", c);
        }
    }
    else if (a == b && a != c)
    { // a==b
        if (a > c)
        {
            printf("\nGreatest number= %.2f\n", a);
        }
        else if (a < c)
        {
            printf("\nGreatest number= %.2f\n", c);
        }
        else if (b > c)
        {
            printf("\nGreatest number= %.2f\n", b);
        }
        else
        {
            printf("\nGreatest number= %.2f\n", c);
        }
    }
    else
    {
        printf("\nAll are equal !\n");
    }


    //;
    printf("\nSuccessfully completed\n");

    return 0;
}