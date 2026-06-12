#include<stdio.h>

int main(){
     int a;

     printf("Enter an integer value:");
     scanf("%d", &a);

     int  *ptr=&a;
     
     printf("\nAccessing value using pointer: %d\n", *ptr);
     printf("Address of a = %p\n", ptr);

     return 0;
}