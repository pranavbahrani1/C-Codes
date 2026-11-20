#include <stdio.h>
int main ()
{
    int a;
    printf("Check for +ve, -ve, 0: \n");
    printf("Enter the number,a: ");
    scanf("%d", &a);
        
    if (a>0)
    {
        printf("Number is +ve");
    }
        
    else if (a<0)
    {
        printf("Number is -ve");
    }
    else if (a==0)
    {
        printf("Number is 0");
    }
    else
    {
        printf("Error");
    }
    return 0;
}