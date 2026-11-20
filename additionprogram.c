#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter a number x and y: ");

    scanf("%d %d", &x,&y);
    z= x-y;
        printf("Your answer: %d", z);
    return 0;
}