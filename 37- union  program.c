#include<stdio.h>
#include<string.h>

union student
{
     int id;
     char name[50];
     float marks;
};
int main(){
     union student s;
     char name[100];
     printf("Enter student ID: ");
     scanf("%d", &s.id);
     printf("Student ID: %d\n", s.id);

     int t=getchar();
     while(t !='\n' && t!=EOF){
          t=getchar();
     }
     printf("Enter student Name: ");
     fgets(name, 100, stdin);

     name[strcspn(name, "\n")]= '\0';

     strcpy(s.name, name);
     
     printf("Student Name: %s\n", s.name);

     printf("Enter student Marks: ");
     scanf("%f", &s.marks);
     printf("Student Marks: %.2f\n", s.marks);

     /*
     Note: Since 'union' shares the same memory for all its members,
     the last assigned value will overwrite the previous ones.
     Therefore, only the last entered value (marks) will be valid.
     */

     return 0;
}    
