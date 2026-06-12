#include <stdio.h>

int main()
{
    int n, r, rev = 0, originalNum = 0;
    printf("Enter any integer number: ");
    scanf("%d", &n);
    originalNum = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (originalNum == rev)
    {
        printf("\nEntered number is palindrome.\n");
    }
    else
    {
        printf("\nEntered number not is palindrome.\n");
    }

    return 0;
}