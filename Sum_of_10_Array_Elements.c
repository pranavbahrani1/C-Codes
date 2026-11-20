#include <stdio.h>
int main()
{
    int arr[10] , i , sum = 0 ;
    printf("C PROGRAM FOR SUM OF ARRAY ELEMENTS\n");
    printf("Enter any ten numbers:- \n");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d\n",&arr[i]);

    }
    for(int i = 0 ; i < 10 ; i++)
    {
            sum = sum + arr[i];
    }

    printf("Sum of array elements is %d\n",sum);
}