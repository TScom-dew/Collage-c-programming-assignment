#include <stdio.h>

  enum dayConst{
    day1=1,
    day2,
    day3,
    day4,
    day5,
    day6,
    day7
  };

int main()
{ 

    int day_num;

    printf("Enter any number(1-7): ");
    scanf("%d", &day_num);

    switch(day_num){
        case day1:
            printf("\nToday is Sunday\n");
            break;
        case day2:
            printf("\nToday is Monday\n");
            break;
        case day3:
            printf("\nToday is Tuesday\n");
            break;
        case day4:
            printf("\nToday is Wednesday\n");
            break;
        case day5:
            printf("\nToday is Thruday\n");
            break;
        case day6:
            printf("\nToday is Friday\n");
            break;
         case day7:
            printf("\nToday is Saturday\n");
            break;
        default:
            printf("\nInvalid number\n");
    }
  
    return 0;
}