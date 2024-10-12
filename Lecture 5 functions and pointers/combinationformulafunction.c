#include <stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination (int n,int r)
{
    int finalans=factorial(n)/(factorial(r)*factorial(n-r));
    return finalans;
}
int main ()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r:\n");
    scanf("%d",&r);
    int answer=combination(n,r);
    printf("The answer for the above entered data is %d",answer);
    return 0;
}
