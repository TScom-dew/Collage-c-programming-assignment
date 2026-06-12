#include <stdio.h>

int main()
{
    int n, r, rev = 0;
    printf("Enter any integer number: ");
    scanf("%d", &n);
    
    int t=n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }


    printf("\noriginal number: %d\n", t);
    printf("reversed number: %d\n", rev);

    return 0;
}