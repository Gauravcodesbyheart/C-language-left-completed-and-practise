#include <stdio.h>
int main()
{
    int x;
    printf("Enter the year: ");
    scanf("%d", &x);
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
    {
        printf("\nThe entered year is Leap year ");
    }
    else
    {
        printf("\nThe entered year is not leap year");
    }
    return 0;
}