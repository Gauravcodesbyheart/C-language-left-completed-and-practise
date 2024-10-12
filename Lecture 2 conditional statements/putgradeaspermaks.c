#include <stdio.h>
int main()
{
    int n;
    printf("Enter the percentage scored by students in MAKAUT university semester examination");
    scanf("%d", &n);
    if (n > 91 && n <= 100)
    {
        printf("Excellent");
    }
    else if (n > 81 && n <= 90)
    {
        printf("Good");
    }
    else if (n > 71 && n <= 80)
    {
        printf("Can do better");
    }
    else if (n > 61 && n <= 70)
    {
        printf("Average");
    }
    else if (n >= 50 && n <= 60)
    {
        printf("Below the average");
    }
    else {
        printf("Fail");
    }

    

    return 0;
}