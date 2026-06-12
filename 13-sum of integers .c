#include <stdio.h>

int main()
{

  int sum = 0, count = 0;
  for (int i = 100; i <= 200; i++)
  {
    if (i % 7 == 0)
    {
      sum += i;
      count++;
    }
  }
  

  printf("the number of all itegers\ngreater than 100 and less than 200 and\ndivisible by 7 is: %d\n", count);
  printf("the sum of all itegers\ngreater than 100 and less than 200 and\ndivisible by 7 is: %d\n", sum);

  return 0;
}
