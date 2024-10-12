#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the  number:");
    scanf("%d",&n);
    int sum=0;
    while (n!=0){
        int ld=n%10;
        sum=sum+ld;
        n=n/10;

    }
    printf("The sum of digits of given number is %d",sum);
    return 0;
}