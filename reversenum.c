#include <stdio.h>
int main ()
{
    int num, rem, result=0;
    printf("C program: Reverse number\n");
    printf("----------------------\n");
    printf("Enter a 5 digit No.:- ");
    scanf("%d", &num);
    
    rem = num%10;
    result = result + rem*10000;
    num = num/10;

    rem = num%10;
    result = result + rem*1000;
    num = num/10;

    rem = num%10;
    result = result +rem*100;
    num = num/10;

    rem = num%10;
    result = result + rem*10;
    num = num/10;

    rem = num%10;
    result = result + rem*1;
    num = num/10;

    printf("\n Result= %d", result);
    return 0;

}