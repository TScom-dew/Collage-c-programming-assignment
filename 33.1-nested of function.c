#include <stdio.h>

/*
Standard C does not support nested functions; you cannot define a function within the body of another function.
All functions in standard C must be defined at the global (file) scope. 
However, some compilers, most notably the GNU C Compiler (GCC), offer nested functions as a non-portable extension. 
Standard C Alternatives
*/
/*
void outer_function(int x) {
    int y = 20;

    // Nested function definition using GCC extension
    void nested_function() {
        printf("Inner function: x = %d, y = %d\n", x, y); // Accesses outer function's variables
    }

    printf("Outer function: calling inner function...\n");
    nested_function(); // Call the nested function
}

int main() {
    outer_function(10);
    // You cannot call nested_function() from here; it is out of scope.
    return 0;
}
*/

