#include<stdio.h>
int main()
{
    int num1,num2,temp;
        printf("Enter num 1 :");
        scanf("%d",&num1);
        printf("Enter num2 :");
        scanf("%d",&num2);
        printf("%d,%d num1,num2");
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;

        printf(" After exchanging the number\n");
        printf("num1=%d\n",num1);
        printf("num2= %d\n",num2);
        return 0;
    
}