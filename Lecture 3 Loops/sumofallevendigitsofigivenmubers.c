#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    while (n!=0){
        int ld=n%10;
        if (ld%2==0)
        {
        sum=sum+ld;
        }
        else
        {
        sum=sum+0;
        }
        n=n/10;
    }
    printf("The sum of all even digits of the given number is  %d",sum);
    return 0;
}