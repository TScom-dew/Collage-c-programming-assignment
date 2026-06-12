#include <stdio.h>

int main() {

    int original_value, sum = 0, r = 0, count_digit = 0;
    
    printf("Enter any positive integer number: ");
    scanf("%d", &original_value);

    // check if invalid
    if (original_value < 0) {
        printf("Invalid input\n");
        return 1;
    }

    int n = original_value;

    // Counting digits
    if (n == 0){
            count_digit = 1;
    }

    while (n != 0) {
        count_digit++;
        n = n / 10;
    }

    // Calculating Armstrong sum
    n = original_value;

    while (n != 0) {
        r = n % 10;

        int power = 1;
        for (int i = 0; i < count_digit; i++) {
            power = power * r;
        }

        sum += power;
        n = n / 10;
    }

    if (original_value == sum){
            printf("\nEntered number is Armstrong.\n");
    }else{
            printf("\nEntered number is NOT Armstrong.\n");
    }

    return 0;
}
