#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter the base number:");
    scanf("%d",&a);
    printf("Enter the exponent for the base number %d:",a);
    scanf("%d",&b);
    int ans=1;
    for (int i=1; i<=b; i++){
        ans=ans*a;
    }
    printf("The %d raised to power of %d is %d",a,b,ans);
    return 0;
}