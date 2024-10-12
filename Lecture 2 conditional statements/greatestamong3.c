#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("The %d is the greatest among all 3 numbers", a);
    }
    if (b > a && b > c)
    {
        printf("%d is the greatest among all 3 numbers", b);
    }
    if (c > a && c > b)
    {
        printf("%d is the greatest among all 3 numbers", c);
    }
    return 0;
}