#include<stdio.h>
int main()
{
    int a,b,sum,diff,mul,rem,quotient,choice;
    printf("C Program : menu driven calculator");
    printf("--------------------------------\n");
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b :");
    scanf("%d",&b);
    printf("options--\n");
    printf("1 : Addition \n");
    printf("2 : subtraction\n");
    printf("3 : Multiplication\n");
    printf("4 : Division\n");
    printf("5 : Exit \n");

    printf("choose ypur option : ");
    scanf("%d",&choice);
    if (choice==1)
    {
        sum = a+b;
        printf("a+b = %d",sum);
    }
    else if(choice==2)
    {
        diff = a-b;
        printf("a-b=%d",diff);
    }
    else if(choice==3)
    {
        mul=a*b;
        printf("a*b=%d",quotient);
    }
        else if (choice == 4)
    {
        rem=a%b;
        printf("a%b=%d",rem);
    }
        else if(choice == 5)
    {
        printf("exit");
    }
    else
    {
        printf("invalid data found");
    }
    return 0;
}