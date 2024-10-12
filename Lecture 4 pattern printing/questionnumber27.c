#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number you want:");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    for (int i=1; i<=2*n-1; i++)
    {   char b=(char)i+64;
        printf("%c",b);
    }
    printf("\n");
    for (int j=1; j<=n-1; j++)
    {   
        int a=1;
        
        for (int k=1; k<=nst; k++)
        {    
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
       
        for(int l=1; l<=nsp; l++)
        {
            printf(" ");
            a++;
        }
        nsp=nsp+2;
        for(int m=1; m<=nst;m++)
        {   
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        nst--;
        printf("\n");
    }
    return 0;
}