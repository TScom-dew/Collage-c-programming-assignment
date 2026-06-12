#include<stdio.h>
#include<string.h>

struct Employee_info
{
     char name[50];
     int id;
     float salary;
};

int main(){
     char name[100];

     struct Employee_info emp;
     printf("Enter Employee Name: ");
     fgets(name, 100, stdin);
     name[strcspn(name, "\n")]='\0';
     strcpy(emp.name, name);

     int ch=getchar();
     while(ch!='\n' && ch!=EOF){
          ch=getchar();
     };// clearing buffer completely

     printf("Enter Employee ID: ");
     scanf("%d", &emp.id);
     printf("Enter Employee Salary: ");
     scanf("%f", &emp.salary);

     printf("\nDisplaying employee Details:\n");
     printf("Employee Name: %s\n", emp.name);
     printf("Employee ID: %d\n", emp.id);
     printf("Employee Salary: %.2f\n", emp.salary);

     return 0;
}