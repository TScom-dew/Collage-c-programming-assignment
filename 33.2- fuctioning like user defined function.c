#include<stdio.h>

/*
a gloabal function call from other user defined funtion 
*/
int  nestedfunction(){
          printf("This is inner function.\n");
          return 0;
     }

int outerfunction(){
     nestedfunction();
     printf("This is outer funtion.\n");
     // nestedfunction();
     return 0;
}
int main(){

     outerfunction();
     // nestedfunction();
     return 0;
}

