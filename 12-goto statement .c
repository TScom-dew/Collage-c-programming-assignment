#include <stdio.h>

int main()
{

    int n = 0, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    backward:
    i++;
    printf("This can be print multiple times because of backward jump\n");
    if (i <= n)
    {
        goto backward;
    }

    // backward jump skip the involve part
    goto forward;
    printf("This can not print in the console because of forward jump \n");
    forward:

    return 0;
}
