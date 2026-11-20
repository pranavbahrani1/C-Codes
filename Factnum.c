#include <stdio.h>
int main(){
    int number,i,fact=1;
    printf("Enter a Number: ");
    scanf("%d",&number);
    for (i=1;i<=number;i++){
        fact=fact*i;
    }
    printf("Factorial of given number is %d ",fact);
    return 0;
}