#include <stdio.h>
#include <math.h>

int add( int a , int b )
{
    return a+b;
}

int subtract( int a , int b )
{
    return a-b;
}

int multiply( int a , int b )
{
    return a*b;
}

float division( int a , int b )
{
    return (float)a/b;
}

int main()
{
    int a, b;

    printf("Enter the 1st number:- \n");
    scanf("%d",&a);
    printf("Enter the 2nd number:- \n");
    scanf("%d",&b);

    printf("Calculator Menu;- \n");
    printf("1. ADDITION= %d\n",add(a,b));
    printf("2. SUBTRACTION= %d\n",subtract(a,b));
    printf("3. MULTIPLICATION= %d\n",multiply(a,b));
    printf("4. DIVISION = %.2f\n",division(a,b));

    if(b!=0)
    printf("DIVISION=%.2f\n",division(a,b));
    else
    printf("Division by ZERO is not possible!!!\n");

    return 0;
    
}