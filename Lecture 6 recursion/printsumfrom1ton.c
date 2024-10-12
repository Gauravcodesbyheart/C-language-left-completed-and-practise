#include <stdio.h>
int sum(int n)
{  
    if (n==1|| n==0)
    return n;
    int recans = n+sum(n-1);
    return recans;
}
int main ()
{
    int n;
    printf("Enter the number you upto which you want sum to be calculated:");
    scanf("%d",&n);
    int ans=sum(n);
    printf("The sum upto given number is %d",ans);
    return 0;
}