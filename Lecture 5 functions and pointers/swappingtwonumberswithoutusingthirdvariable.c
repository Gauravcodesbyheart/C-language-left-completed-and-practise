#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);
    int b;
    printf("Enter the second number:");
    scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("After swapping the value of first number is %d\nvalue of second number is %d",a,b);
     return 0;

}