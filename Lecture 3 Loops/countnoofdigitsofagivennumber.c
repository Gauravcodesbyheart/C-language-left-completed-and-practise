#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=0;
    while (n!=0){

        n=n/10;
        a=a+1;
    }
    printf("The number of digits in the given number is %d",a);
    return 0;
}