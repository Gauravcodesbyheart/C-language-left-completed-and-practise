#include <stdio.h>
int main ()
{
    int a;
    int b;
    printf("\nEnter the value of first number");
    scanf("%d",&a);
    printf("\nEnter the value of second number");
    scanf("%d",&b);
    int c=a%b;
    printf("The remainder for the given data will be %d",c);
    return 0;
}