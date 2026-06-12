#include<stdio.h>
#include<string.h>

int main(){

     FILE *fptr;
     fptr = fopen("INPUT.txt", "w");
     if(fptr == NULL){
          printf("Error opening file!\n");
          return 1;
     }

     // entering data to INPUT file
     char str[100];
     printf("Enter a string to write to the file: ");
     
     fgets(str, 100, stdin);

     fprintf(fptr, "%s", str);
     //or
     // fputs(str);

     fclose(fptr);


     // opening file for reading
     FILE *fnewptr=fopen("INPUT.txt", "r");
     if(fnewptr == NULL){
          printf("Error opening file!\n");
          return 1;
     }
     printf("Displaying Data after reading INPUT file:\n");
     char read_str[100];

     int  ch;
     
     ch = fgetc(fnewptr);
     while (ch != EOF)
     {
          printf("%c", ch);
          ch = fgetc(fnewptr);
     }
     
     
     fclose(fnewptr);

     return 0;
}