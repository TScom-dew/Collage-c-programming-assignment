#include <stdio.h>

int main(){
    int n, fact = 1, t;
    printf("Enter any positive integer number\n");
    scanf("%d", &n);
    t=n;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    printf("Factorial of %d is: %d\n", t, fact);

    return 0;
}

