#include <stdio.h>
int main()
{
    int order[5] = { 2 , 4 , 6 , 8 , 10};
    int a , b , temp;
    for( a = 0 ; a < 5 ; a++)
    {
        for( b = a + 1 ; b < 5 ; b++)
        {
            if( order[a] > order[b] )
            {
                temp = order[a];
                order[a] = order[b];
                order[b] = temp;
            }
        }
    }
    printf("Ascending order of array = \n");
    for( a = 0 ; a < 5 ; a++)
    printf("%d\n",order[a]);
    return 0;
}