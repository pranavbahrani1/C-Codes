#include <stdio.h>
#include <math.h>
 
int main(){
float a,b,sum,diff,mul,div,divrem,c;

    printf("\nEnter the 1st number: ");
    scanf("%2f", &a);
    printf("\nEnter the 2nd number: ");
    scanf("%2f", &b);
    
    printf("\nEnter 1 for Sum \n");
    printf("\nEnter 2 for Substraction: \n");
    printf("\nEnter 3 for Multiplication: \n");
    printf("\nEnter 4 for Divison Quotient: \n");
    printf("\nEnter 5 for Divison Reminder: \n");
    scanf("%2f", &c);

    if(c==1){
    sum=a+b;
    printf("Addition of given numbers: %2f \n", sum);
    }
    else if(c==2){
    diff=a-b;
    printf("Substraction of given numbers: %2f \n", diff);
    }
    else if(c==3){
    mul=a*b;
    printf("Multiplication of given numbers: %2f \n", mul);
    }
    else if(c==4){
    div=a/b;
    printf("Division Quotient of given numbers: %2f \n", div);
    }
   // else if(c==5){
   // divrem=a%b;
   // printf("Divison Remainder of given numbers: %2f \n", divrem);
    //}
    else
    {
        printf("Error");
    }
    return 0;
}