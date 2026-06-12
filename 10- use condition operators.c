#include <stdio.h>

int main()
{

    float a = 0, b = 0;
    printf("Enter two different integer numbers\n");
    printf("First number: ");
    scanf("%f", &a);
    
    printf("second number: ");
    scanf("%f", &b);
    
    // using the condition operator
    // ( condition )? true block : false block ;
    (a > b) ? printf("a is greater than b\n") : printf("b is greater than a\n");

    return 0;              
}
