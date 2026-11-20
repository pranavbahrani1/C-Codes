#include <stdio.h>
int main ()
{
    int choice,a,b,result;
    printf("C program : -----MENU DRIVEN CALCULATOR------- \n\n");
    printf("----------------------------------------------\n");
    printf("Enter the value a:- ");
    scanf("%d",&a);
    printf("Enter the value b:- ");
    scanf("%d",&b);
    printf("OPTIONS----\n");
    printf("1:-Addition\n");
    printf("2:-Subtracttion\n");
    printf("3:-Multiplication\n");
    printf("4:-Division\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        result = a+b;
        printf("Addition = %.2f",result);
        break;

        case 2:
        result = a-b;
        printf("Subtraction = %.2f",result);
        break;

        case 3:
        result = a*b;
        printf("Multiplication = %.2f",result);
        break;

        case 4:
        if (b!=0)
        {
        result = a/b;
        printf("Division = %2f",result);
        break;
        }

        else
        {
            printf("Division by 0 is not possible");
        }
        break;

        default:
        printf("Invalid");
    }

    return 0;
}