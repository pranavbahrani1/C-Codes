#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature in Celcius :");
    scanf("%f",celsius);
    //conversion formula : (c*9/5)+32
    fahrenheit=(celsius*9.0/5.0)+32;
    printf("%f\n",fahrenheit);
    return 0;
}