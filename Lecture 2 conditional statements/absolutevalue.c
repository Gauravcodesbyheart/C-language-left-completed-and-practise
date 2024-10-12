#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number:");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("\nThe absolute value of number is %d", n * (-1));
    }
    else
    {
        printf("\nThE absolute value of number is %d", n);
    }
    return 0;
}