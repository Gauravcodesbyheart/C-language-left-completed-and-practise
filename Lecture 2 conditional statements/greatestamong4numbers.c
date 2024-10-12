#include <stdio.h>
int main()
{
    int a, b, c,d;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    printf("Enter the fourth number:");
    scanf("%d", &d);
    if (a > b && a > c && a>d)
    {
        printf("The %d is the greatest among all 3 numbers", a);
    }
    if (b > a && b > c && b>d)
    {
        printf("%d is the greatest among all 3 numbers", b);
    }
    if (c > a && c > b && c>d)
    {
        printf("%d is the greatest among all 3 numbers", c);
    }
    if (c > a && c > b && c>d)
    {
        printf("%d is the greatest among all 3 numbers", c);
    }if (d > a && d > b && d>c)
    {
        printf("%d is the greatest among all 3 numbers", d);
    }
    return 0;
}