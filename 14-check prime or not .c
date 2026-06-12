#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter an integer number: ");
    scanf("%d", &n);

    if(n<2){
        printf("Not Prime\n");
    }else if(n>2){
        int flag = 1;
        for (int i = 2; i < n;i++)
        {
            if(n%i==0){
                flag = 0;
                break;
            }
        }
        if(flag==1)//not divided
        {
            printf("prime\n");
        }else{
            printf("Not Prime\n");
        }
    }else{
        printf("prime\n");
    }

    
    return 0;
}