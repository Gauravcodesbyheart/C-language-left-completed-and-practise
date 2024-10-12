#include <stdio.h>
int powerlog(int a,int b)
{   if (b==1)
{
     return a;
}
    if (b%2==0) 
    {
        return powerlog(a,b/2)*powerlog(a,b/2);
    }
    else
    {
        return powerlog(a,b/2)*powerlog(a,b/2)*a;
    }
   
}
int main ()
{
    int a,b;
    printf("Enter the base number:");
    scanf("%d",&a);
    printf("Enter the exponent:");
    scanf("%d",&b);
    int  p = powerlog(a,b);
    printf("The %d raised to %d is %d",a,b,p);
    return 0;
}