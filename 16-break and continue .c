#include <stdio.h>
#include <string.h>

    enum Days{
        sunday=1,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };
int main()
{
    int n;
    printf("Enter any integer number:  ");
    scanf("%d", &n);

    // use continue in loop 
    printf("Printing the odd number: \n");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d  ", i);
    }

    getchar();// to clear the buffer
    // use break in loop 
    char str[100];
    printf("\nEnter your name in lowercase: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")]='\0';

    printf("\nPrinting the first vowel charecter of your name: ");
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            printf("%c\n", str[i]);
            break;
        }
    }

    //use break in switch
    int days;
    printf("Enter the number(1-7): ");
    scanf("%d", &days);
    printf("Full name of your day: ");
    switch (days)
    {
    case 1:
        printf("Sunday\n");
        break;
    case monday:
        printf("Monday\n");
        break;
    case tuesday:
        printf("Tuesday\n");
        break;
    case wednesday:
        printf("Wednesday\n");
        break;
    case thursday:
        printf("Thursday\n");
        break;
    case friday:
        printf("Friday\n");
        break;
    case saturday:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid input please try again \n");
        break;
    }

    return 0;
}