#include <stdio.h>
#include <math.h>
int main()
{
    int num,largest,i;
    printf("ENTER 10 NUMBERS:- \n");
    scanf("%d",&largest);
    for(i=2;i<=10;i++)
    {
        scanf("%d",&num);
        if (num > largest )
        {
            largest=num;
        }
    } 
    printf("Largest number is %d\n", largest);
    return 0;
}