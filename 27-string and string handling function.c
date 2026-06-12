#include <stdio.h>
#include <string.h>

int main()
{
     char str1[50], str2[50];
     printf("Enter a string: ");
     scanf("%s", str1);
     // strlen()
     size_t length = strlen(str1);
     printf("Length of entered string: %zu\n", length);

     // strrev()
     // strrev(str1);
     // printf("Reversed of entered string: %s", str1);

     // strcpy()
     strcpy(str2, str1);
     printf("Copied value of str1 in str2: %s\n", str2);

     // strcat()
     strcat(str1, " Kumar");
     printf("Adding ' Kumar' at the end of str1: %s\n", str1);

     // strcmp()
     int p = strcmp(str1, str2);
     if (p == 0)
     {
          printf("Both str1 and str2 are equal.\n");
     }
     else
     {
          printf("Both str1 and str2 are not equal.\n");
     }

     // now clearing complete buffer
     int ch1 = getchar();
     while (ch1 != '\n' && ch1 != EOF)
     {
          ch1 = getchar();
     }

     //
     char str3[100];

     printf("\nEnter a word: ");
     scanf("%s", str3);

     // finding specific position
     str3[strcspn(str3, "\n")] = '\0';

     printf("\nEntered string : %s\n", str3);

     // now clearing complete buffer
     int ch = getchar();
     while (ch != '\n' && ch != EOF)
     {
          ch = getchar();
     }

     printf("Enter an string : ");
     scanf("%s", str3);

     printf("\nEntered string: %s\n", str3);

     return 0;
}