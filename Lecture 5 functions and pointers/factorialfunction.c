#include <stdio.h>
int factorial( int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main ()
{
    int n;
    printf("Enter the number for which you want to calculate factorial:\n");
    scanf("%d",&n);
    int ans=factorial(n);
    printf("The factorial of %d is %d",n,ans);
    return 0;

}