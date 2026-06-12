/*
we can not define a function inside another function in C language.But we can achieve similar functionality using function pointers or by defining helper functions at the global scope.
Here is an example using a helper function defined at the global scope:
*/
#include <stdio.h>
void nested_function(int x, int y) {
    printf("Inner function: x = %d, y = %d\n", x, y); // Accesses outer function's variables
}
void outer_function(int x) {
    int y = 20;

    printf("Outer function: calling inner function...\n");
    nested_function(x, y); // Call the nested function
}
int main() {
    outer_function(10);
    // You can call nested_function() from here if needed
    return 0;
}

/*
Note: This approach does not create a true nested function, but it allows you to achieve similar functionality by passing the necessary parameters to the helper function.
*/
/*
Standard C does not support nested functions; you cannot define a function within the body of another function. All functions in standard C must be defined at the global (file) scope. 
However, some compilers, most notably the GNU C Compiler (GCC), offer nested functions as a non-portable extension. 
Standard C Alternatives.
*/