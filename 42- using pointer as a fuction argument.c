#include<stdio.h>

void fun(int *ptr){
     printf("\nValue of a using pointer=%d\n",*ptr);
     *ptr +=10;
}
int main(){

     int a=5;
     printf("\nValue of a before funtion call=%d\n",a);
     fun(&a);
     printf("\nValue of a after function call=%d\n",a);

     return 0;
}