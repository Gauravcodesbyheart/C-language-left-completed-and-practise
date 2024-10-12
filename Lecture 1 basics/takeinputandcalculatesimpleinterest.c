#include <stdio.h>
int main ()
{
    float p,r,t;
    
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("\nEnter the rate:");
    scanf("%f",&r);
    printf("\nEnter the time:");
    scanf("%f",&t);
    float si=p*r*t;
    printf("The simple interest  will be %f",si);
    return 0;
}