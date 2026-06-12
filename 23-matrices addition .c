#include<stdio.h>
int main(){
     int r=0, c=0;
     /* both matrices will be same order 
     for performing addition operation*/

     printf("Enter Row (both matrices have same): ");
     scanf("%d", &r);
     printf("Enter column (both matrices have same): ");
     scanf("%d", &c);

     int m1[r][c], m2[r][c], result[r][c];

     printf("Enter %d integer elements for first matrix : ", r*c);
     for (int i = 0; i < r; i++){
          for (int j = 0; j < c;j++){
               scanf("%d", &m1[i][j]);
          }
     }
     printf("Enter %d integer elements for second matrix : ", r*c);
     for (int i = 0; i < r; i++){
          for (int j = 0; j < c;j++){
               scanf("%d", &m2[i][j]);
          }
     }

     // addition operation
     for (int i = 0; i < r; i++){
          for (int j = 0; j<c;j++){
               result[i][j]=0;
               result[i][j] = m1[i][j] + m2[i][j];
          }
     }

     //Displaying result
     printf("Displaying result matrix:\n");
     for (int i = 0; i < r; i++){
          for (int j = 0; j < c;j++){
               printf("%d ", result[i][j]);
          }
          printf("\n");
     }

     return 0;

}