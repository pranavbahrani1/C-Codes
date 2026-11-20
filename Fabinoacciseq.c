#include <stdio.h>
int main ()
{
    int a = 0 , b = 1 , c , max ;
    printf("C program : FIBONACCI SEQUENCE \n");
    printf("-----------------------------------\n");
    printf("Enter the maximum value:- ");
    scanf("%d",&max);
    printf("Fibonacci series :  0 1 \n\n");
    c = a + b;
    while ( c<= max )
    {
        printf("%d\n",c);
        a = b;
        b = c;
        c = a + b;
    }

    printf("\n\n");
    return 0;
}