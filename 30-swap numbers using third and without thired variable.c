#include <stdio.h>

int main()
{
      int a, b;
      printf("Enter two integer numbers:\n");
      printf("First Number: ");
      scanf("%d", &a);

      printf("Second Number: ");
      scanf("%d", &b);

      printf("original number\na= %d, b= %d\n", a, b);

      // using third variable
      int t;
      t = a;
      a = b;
      b = t;
      printf("On swaping number using third variable\na= %d, b= %d\n", a, b);

      // without using third variable
      int p, q;
      printf("\n\nEnter two integer numbers:\n");
      printf("First Number: ");
      scanf("%d", &p);

      printf("Second Number: ");
      scanf("%d", &q);

      printf("original number\np= %d, q= %d\n", p, q);

      p = p + q;
      q = p - q;
      p = p - q;
      printf("On swaping number without using third variable\np= %d, q= %d\n", p, q);

      return 0;
}