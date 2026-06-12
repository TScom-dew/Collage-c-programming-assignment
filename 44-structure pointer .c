#include <stdio.h>

struct value {
    int a;
    int b;
};

int main() {
    struct value obj;        
    struct value *ptr = &obj; 

    // Ab ptr-> use karna bilkul sahi hai
    ptr->a = 2;
    ptr->b = 3;


    printf("Value of a: %d\n", ptr->a);
    printf("Value of b: %d\n", ptr->b);
    

    return 0;
}
