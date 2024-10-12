#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n%3==0 || n%5==0)
    {
        if (n%15!=0){
            printf("The number is divisible by 3 or 5 but not divisible by 15");
        }
        else {
            printf("The number is not divisible by 3 or 5 so also not divisible by 15");
        }
    }
    else {
        printf("The number is not divisible by 3 or 5");
    }
    return 0;
}