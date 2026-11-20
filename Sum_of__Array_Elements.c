#include <stdio.h>
int main()
{
    printf("C PROGRAM FOR SUM OF ARRAY ELEMENTS\n");
    int arr[7] = { 2 , 4 , 6 , 8 , 12 , 16 , 18 };
    int sum = 0 , i;

    for(int i = 0 ; i < 7 ; i++)
    sum = sum + arr[i];

    printf("Sum of array elements is %d\n",sum);
return 0;
}