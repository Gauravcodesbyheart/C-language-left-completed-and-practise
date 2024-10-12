#include <stdio.h>
int main ()
{
    float x;
    printf("\nEnter the number:");
    scanf("%f",&x);
    int y;
    y=x;
    float z=x-y;
    printf("\nThe fractional part of the number is %f",z);
    return 0;
}