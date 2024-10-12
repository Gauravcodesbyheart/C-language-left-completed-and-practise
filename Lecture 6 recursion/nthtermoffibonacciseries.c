#include <stdio.h>
int fibonacci (int n)
{
    if(n==1||n==2) return 1;
    int ans1 = fibonacci(n-1);
    int ans2 = fibonacci(n-2);
    int ans=ans1+ans2;
    return ans;
}
int main ()
{
    int n;
    printf("Enter the term youu want");
    scanf("%d",&n);
    int ans=fibonacci(n);
    printf("The %d th term of the fibonacci is %d",n,ans);
    return 0;
}