#include <stdio.h>
int main ()
{
    int d,a,r,q;
    printf("\nEnter the dividend:");
    scanf("%d",&d);
    printf("\nEnter the divisor:");
    scanf("%d",&a);
    q=d/a;
    r=d-a*q;
    printf("\nThe remainder for the given data is %d",r);
    return 0;

}