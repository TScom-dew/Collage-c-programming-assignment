#include<stdio.h>
#include<string.h>

/* 
finding the length of character string using pointer
*/

int main(){
     char str[100];
     printf("Enter a string: ");
     fgets(str, 100, stdin);

     size_t length = 0;

     str[strcspn(str, "\n")]='\0';

     // using pointer to calculate length
     char *ptr = str;//pointing to first character of string
     while (*ptr != '\0'){
          length++;
          ptr++;
     }
     printf("Length of the string is: %zu\n", length);
     return 0;
}