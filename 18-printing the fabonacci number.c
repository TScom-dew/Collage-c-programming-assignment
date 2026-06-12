#include <stdio.h>

int main()
{
    long long int n, f1 = -1, f2 = 1, f3 = 0;
    printf("Enter any integer number: ");
    scanf("%lld", &n);

    printf("\nNow printing the fabonacci number upto %lld.\n", n);
    for (int i = 0; i <= n; i++)
    {
        f3 = f1 + f2;
        printf("%lld  ", f3);
        f1 = f2;
        f2 = f3;
    }

    printf("\n");

    return 0;
}