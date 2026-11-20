#include <stdio.h>
int main()
{
    int arr[5];
    int i , largest = 0;
    printf("ENTER 5 ENTRIES:- \n");
    for( i = 0 ; i <= 4; i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for( i = 0 ; i < 5 ; i++)
    {
        if( arr[i] > largest )
        largest = arr[i];
    }
    printf("Greatest number is %d\n",largest);
    return 0;
}