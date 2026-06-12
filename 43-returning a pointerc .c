#include <stdio.h>
#include <stdlib.h> 


float* ptrfunction() {
    
    float *ptr = (float*) malloc(sizeof(float));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("\nEnter a value: ");
    scanf("%f", ptr); // No '&' needed because ptr is already a pointer

    printf("Address of allocated memory inside function: %p\n", (void*)ptr);

    return ptr; 
}

int main() {
    // Receive the pointer from the function
    float *address = ptrfunction();
    
    if (address != NULL) {
        // Corrected format specifiers
        printf("Returned address to main function : %p\n", (void*)address);
        printf("Value stored at that address       : %f\n", *address);
        
        // Always free heap memory when done to prevent memory leaks
        free(address); 
    }
    
    return 0;
}
