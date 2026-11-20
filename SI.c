#include <stdio.h>
#include <math.h>
 
int main(){

float P,R,T,SI;

printf("Enter Principle Amount: ");
scanf("%f",&P);


printf("Enter Rate: ");
scanf("%f",&R);


printf("Enter Time in Years: ");
scanf("%f",&T);

SI = (P*R*T)/100;

printf("SI = %f", SI);

return 0;

}
