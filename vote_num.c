#include <stdio.h>

int main (){

    int num;
    printf("Program for Elgibity for Voting: \n");
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num>=18){
        printf("You Can Vote");
    }
    else if(num<18){
        printf("You cannot vote");

    }
    else{
        printf("error");
    }
    
        
}