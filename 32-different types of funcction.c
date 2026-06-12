#include <stdio.h>

      void function1(){
          printf(" This is function-1 with no parameter and no return values\n");
      }

      void function2(int a){
          printf(" This is function-2 with parameter %d.\n", a);
      }
      int function3(int a, int b){
          printf(" This is function-3 with parameters %d and %d.\n", a, b);
          
          return a+b ;
      }

      int function4(){
              printf(" This is function-4 with return value 5.\n");
              return 5;
      }
      // function4: that returns multiple return values 
      void function5(int *x, int *y){
          *x = 10;
          *y = 20;
          printf(" This is function-5 returning multiple values %d and %d.\n", *x, *y);
      }

int main(){
      int sum, val1, val2;
      function1();
      function2(100);
      sum = function3(10, 20);
      printf(" Sum returned by function-3: %d\n", sum);
      int ret = function4();
      printf(" Value returned by function-4: %d\n", ret);
      function5(&val1, &val2);
      printf(" Values returned by function-5: %d and %d\n", val1, val2);

      return 0;
}
