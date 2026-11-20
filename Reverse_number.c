#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("C Program: Reverse number\n");
    printf("-------------------------\n");
    printf("Enter a number :");
    scanf("%d",&num);
    rem=num%10;
    rev=rev+rem*10000;
    num=num/10;

    rem=num%10;
    rev=rev+rem*1000;
    num=num/10;

    rem=num%10;
    rev=rev+rem*100;
    num=num/10;

    rem=num%10;
    rev=rev+rem*10;
    rem=num%10;
    
    rem=num%10;
    rev=rev+rem*1;
    rem=num%10;

    printf("\n result %d",rev);
    printf("\n\n");
    return 0;
}