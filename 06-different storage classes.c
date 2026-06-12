#include <stdio.h>

int main()
{

    // auto int 
    auto int number1=4; // same as int number1=4
    size_t size=sizeof(number1);

    printf("sizeof(number1) : %zu\n", size);
    printf("number1 : %d\n\n", number1);

    //auto float
    auto float number2=4.5;// same as float number2=4.5

    size =sizeof(number2);

    printf("sizeof(number2) : %zu\n", size);
    printf("number2 : %f\n\n", number2);

    //auto double
    auto double number3=4.5;// same as double number3=4.5

    size =sizeof(number3);

    printf("sizeof(number3) : %zu\n", size);
    printf("number3 : %lf\n\n", number3);

    //auto char
    auto char character1='A';// same as char character1=4.5

    size =sizeof(character1);

    printf("sizeof(character1) : %zu\n", size);
    printf("character1 : %c\n\n", character1);


    return 0;
}