#include<stdio.h>
#include<string.h>

int main(){
      char str1[50];
      char str2[50];
      printf("Enter string1: ");
      // using scanf
      scanf("%s", str1);
      printf("String1: %s\n", str1);

//      getchar();// clearing buffer

      int c;
      //to clear complete buffer
      while ((c = getchar()) != '\n' && c != EOF);

      printf("\nEnter string2: ");
      // using gets
      /*
      Write formatted output to stdout.

      This function is a possible cancellation point and therefore not
      marked with __THROW.
      */
      // gets(str2);
      // printf("String2: %s\n", str2);

      

      return 0;
}