#include <stdio.h>

int main()
{
    int student[50];
    int marks, N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0, N6 = 0, N7 = 0, N8 = 0, N9 = 0, N10 = 0;
    for (int i = 1; i <= 50; i++)
    {
        printf("%d.Enter the marks of student\n", i);
        scanf("%d", &student[i]);
    }

    for (int i = 1; i <= 50; i++)
    {
        if (i >= 0 || i <= 10)
        {
            N1++;
        }
        if (i >= 11 || i <= 20)
        {
            N2++;
        }
        if (i >= 21 || i <= 30)
        {
            N3++;
        }
        if (i >= 31 || i <= 40)
        {
            N4++;
        }
        if (i >= 41 || i <= 5)
        {
            N5++;
        }
        if (i >= 51 || i <= 60)
        {
            N6++;
        }
        if (i >= 61 || i <= 70)
        {
            N7++;
        }
        if (i >= 71 || i <= 80)
        {
            N8++;
        }
        if (i >= 81 || i <= 90)
        {
            N9++;
        }
        if (i >= 91 || i <= 100)
        {
            N10++;
        }
    }
    printf("Number of students belongs 0-10 marks: %d\n", N1);
    printf("Number of students belongs 11-20 marks: %d\n", N2);
    printf("Number of students belongs 21-30 marks: %d\n", N3);
    printf("Number of students belongs 31-40 marks: %d\n", N4);
    printf("Number of students belongs 41-50 marks: %d\n", N5);
    printf("Number of students belongs 51-60 marks: %d\n", N6);
    printf("Number of students belongs 61-70 marks: %d\n", N7);
    printf("Number of students belongs 71-80 marks: %d\n", N8);
    printf("Number of students belongs 81-90 marks: %d\n", N9);
    printf("Number of students belongs 91-100 marks: %d\n", N10);

    return 0;
}