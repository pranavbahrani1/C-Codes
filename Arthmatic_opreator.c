#include <stdio.h>
#include <math.h>
 
int main(){
int a,b;

    printf("\nEnter the 1st number: ");
    scanf("%d", &a);
    printf("\nEnter the 2nd number: ");
    scanf("%d", &b);
    
    printf("\n Addition of two numbers = %d \n", a+b);
    printf("\n Division Modulus of two numbers = %d \n", a%b);
    printf("\n Subtraction of two numbers = %d \n", a-b);
    printf("\n Multiplication of two numbers = %d \n", a*b);
    printf("\n Division Remainder of two numbers = %d \n", a/b);
    printf("PreIncrement = %d\n",++a);
    printf("PreIncrement = %d \n",a);
    printf("PostIncrement = %d \n",a++);
    printf("PostIncrement = %d \n",a);
    printf("PredeIncrement = %d \n",--a);
    printf("PredeIncrement = %d \n", a);
    printf("PostdeIncrement = %d \n",a--);
    printf("Uniary Plus = %d \n",+a);
    printf("Uniary Minus = %d \n",-a);

    return 0;
}

