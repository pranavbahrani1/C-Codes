#include <stdio.h>

int main()
{

    int num,rem,rev = 0;

    printf("C Program for Reverse Number\n");
    printf("----------------------------\n");
    printf("Enter a Number:");
    scanf("%d", &num);

    rem = num%10;
    rev = rev + rem*10000;
    num = num/10;

    rem = num%10;
    rev = rev + rem*1000;
    num = num/10;

    rem = num%10;
    rev = rev + rem*100;
    num = num/10;

    rem = num%10;
    rev = rev + rem*10;
    num = num/10;

    rem = num%10;
    rev = rev + rem*1;
    num = num/10;

    printf("\n Result= %d", rev);
    return 0;
}