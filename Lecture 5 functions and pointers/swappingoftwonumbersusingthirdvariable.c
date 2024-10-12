#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);
    int b;
    printf("Enter the second number:");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping the value of a is %d and b is %d",a,b);
    return 0;


}