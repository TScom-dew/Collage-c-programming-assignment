#include <stdio.h>

int main()
{


    float p = 0, r = 0, t = 0, si = 0, P = 0, A = 0, ci = 0;

    printf("For calculating simple interest: \n ");
    printf("\nEnter principle value :");
    scanf("%f", &p);

    printf("Enter rate of interest :");
    scanf("%f", &r);

    printf("Enter the time :");
    scanf("%f", &t);

    // calculating the simple interest
    si = (p * r * t) / 100.0;
    printf("\nSimple interest= %f\n", si);

    // calculating the compound interest
    printf("\nFor calculating compound interest: \n");
    printf("Enter principle amount :");
    scanf("%f", &P);
    printf("Enter rate of interest :");
   
    scanf("%f", &A);
    // calculating the compound interest
    ci = P - A;
    printf("\nCompound interest= %f\n", ci);

    return 0;
}