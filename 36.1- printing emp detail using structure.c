#include<stdio.h>

struct student
{
     int id;
     char name[50];
     float marks;
};

int main(){
     struct student s[5];//this is an array of structure
     for (int i = 0; i < 5; i++)
     {
          printf("Enter student-%d ID: ", i + 1);
          scanf("%d", &s[i].id);
          printf("Enter student-%d Name: ", i + 1);
          scanf("%s", &s[i].name);
          printf("Enter student-%d Marks: ", i + 1);
          scanf("%f", &s[i].marks);
     }
     printf("\n Displaying  Student Details:\n");

     printf("ID\tName\tMarks\n");
     for (int i = 0; i < 5; i++)
     {
          printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].marks);
     }
     return 0;
}
