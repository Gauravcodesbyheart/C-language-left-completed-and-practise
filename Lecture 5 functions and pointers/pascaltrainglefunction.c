#include <stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ans=factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}
int main()
{   
    int r,c;
    
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    int nsp=r;
    for(int i=0;i<=r;i++)
    {   
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp--;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");

    }
    // int c;
    // printf("Enter the number of columns:\n");
    // scanf("%d",&c);
    return 0;

}