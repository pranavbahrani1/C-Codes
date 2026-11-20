#include <stdio.h>
int main()
{
    int arr[10];
    int a,b,i,temp;
    printf("Enter 10 Numbers: \n");
    for (i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    for( a = 0 ; a < 10 ; a++)
    {
        for( b = a + 1 ; b < 10 ; b++)
        {
            if( arr[a] > arr[b] )
            {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    printf("Ascending order of array = \n");
    for( a = 0 ; a < 10 ; a++)
    printf("%d\n",arr[a]);
    return 0;
}