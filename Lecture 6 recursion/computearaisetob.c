#include <stdio.h>
int power(int b,int e)
{
    if(b==0) return 1;
    int recans = b*power(b,e-1);
    return recans;
}
int main ()
{
    int b;
    printf("Enter the base number:");
    scanf("%d",&b);
    int e;
    printf("Enter the exponent:");
    scanf("%d",&e);
    int ans=power(b,e);
    printf("The value of %d raised to %d is %d",b,e,ans);
    return 0;
}