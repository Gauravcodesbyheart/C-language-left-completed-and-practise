#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows you want:");
    scanf("%d", &n);
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            printf("*");

        }
        nst=nst+2;
        printf("\n");
    }
    return 0;

}