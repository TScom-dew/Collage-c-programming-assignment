//  chain of pointers
#include<stdio.h>

int main(){

     int a = 10;
     int *ptr1=&a;
     int **ptr2=&ptr1;
     int ***ptr3=&ptr2;
     int ****ptr4=&ptr3;
     int *****ptr5=&ptr4;
     printf("Value of a=%d\n",a);
     printf("Value of a using ptr1=%d\n",*ptr1);
     printf("Value of a using ptr2=%d\n",**ptr2);
     printf("Value of a using ptr3=%d\n",***ptr3);
     printf("Value of a using ptr4=%d\n",****ptr4);
     printf("Value of a using ptr5=%d\n\n",*****ptr5);

     printf("Address of a=%p\n",&a);
     printf("Address of a using ptr1=%p\n",ptr1);
     printf("Address of a using ptr2=%p\n",*ptr2);
     printf("Address of a using ptr3=%p\n",**ptr3);
     printf("Address of a using ptr4=%p\n",***ptr4);
     printf("Address of a using ptr5=%p\n\n",****ptr5);

     printf("Value of ptr1=%p\n",ptr1);
     printf("Value of ptr2=%p\n",ptr2);
     printf("Value of ptr3=%p\n",ptr3);
     printf("Value of ptr4=%p\n",ptr4);
     printf("Value of ptr5=%p\n",ptr5);

     return 0;

}