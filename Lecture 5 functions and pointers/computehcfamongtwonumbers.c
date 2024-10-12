#include <stdio.h>
int min (int a,int b)
{
    if (a<b)
    {
        return a;
        
    }
    else
    {
        return b;
    }
}
int gcd(int a,int b)
{   
    int hcf;
    for(int i=1; i<=min(a,b); i++)
    {
        if(a%i==0 && b%i==0){
             hcf=i;
        }

    }
    return hcf;
}
int main ()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    int ans=gcd(a,b);
    printf("The HCF of the two given number is %d",ans);
    return 0;
}