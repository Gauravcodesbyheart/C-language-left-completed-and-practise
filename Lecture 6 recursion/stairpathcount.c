#include <stdio.h>
int stair (int n)
{
    if (n==1||n==2) return n;
    int totalways = stair(n-1)+stair(n-2);
    return totalways;
}
int main ()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int ways= stair(n);
    printf("The total no. of ways to reach at %d stair is %d",n,ways);

}