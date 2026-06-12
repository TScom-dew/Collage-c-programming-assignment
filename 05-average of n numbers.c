#include <stdio.h>

int main()
{
    int n = 0;
    float sum = 0;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    float num[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d: ", i+1);
        scanf("%f", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    printf("\nThe average of set of numbers=%.2f\n", sum / n);

    return 0;
}