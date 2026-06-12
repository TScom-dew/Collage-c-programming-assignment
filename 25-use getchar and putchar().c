#include<stdio.h>

int main(){
     char ch;

     printf("Enter a line text:");

     while(ch !='\n'){
          ch = getchar();     // read until ENTER key is pressed
          putchar(ch);   // print each character
     }
     
     return 0;
}