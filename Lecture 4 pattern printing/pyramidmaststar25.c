#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    for (int j=1; j<=n*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    for (int i=1; i<=n-1; i++)
    {  
        for(int k=1; k<=nst;k++)
        {
            printf("*");
        }
        
        for(int q=1; q<=nsp; q++)
        {
            printf(" ");
        }
        nsp=nsp+2;
        for (int s=1; s<=nst; s++)
        {
            printf("*");
        }
        nst--;
        printf("\n");
        
    }
    return 0;
}