#include <stdio.h>
int main()
{
    int arr[10];
    int i , largest = 0;
    printf("Enter 10 Numbers: \n");
    for( i = 0 ; i <= 10; i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for( i = 0 ; i < 11 ; i++)
    {
        if( arr[i] > largest )
        largest = arr[i];
    }
    printf("Greatest number is %d\n",largest);
    return 0;
}