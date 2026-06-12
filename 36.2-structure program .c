#include<stdio.h>

struct student 
{
     int id[5];
     char name[50][5];
     float marks[5];
};

int main(){
     struct student s;// there is array within structure
     for (int i = 0; i < 5; i++){
          printf("Enter student-%d ID: ", i + 1);
          scanf("%d", &s.id[i]);
          printf("Enter student-%d Name: ", i + 1);
          scanf("%s", &s.name[i]);
          printf("Enter student-%d Marks: ", i + 1);
          scanf("%f", &s.marks[i]);
     }
     printf("\n Displaying  Student Details:\n");
     printf("ID\tName\tMarks\n");
     for (int i = 0; i < 5; i++){
          printf("%d\t%s\t%.2f\n", s.id[i], s.name[i], s.marks[i]);
     }
     return 0;
}
