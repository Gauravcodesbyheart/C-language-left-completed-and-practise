#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for (int i=1; i<=n; i++)
    {   
        int a=i-1;
        for (int j=1; j<=nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        
        for(int k=1; k<=nst; k++)
        {
            printf("%d",k);
        }
        nst++;
        for (int q=1; q<=i-1;q++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}