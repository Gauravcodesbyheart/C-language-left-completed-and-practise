#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number you want:");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    int c=1;
    for (int i=1; i<=2*n-1; i++)
    {   
        if(i<=n){
            printf("%d",c);
            c++;
        }
        else{
            printf("%d",c-2);
            c--;
        }
    }
    printf("\n");
    for (int j=1; j<=n-1; j++)
    {   
        int a=1;
        
        for (int k=1; k<=nst; k++)
        {    
            
            printf("%d",k);
            a++;
        }
       
        for(int l=1; l<=nsp; l++)
        {
            printf(" ");
        }
        nsp=nsp+2;
        a--;
        for(int m=1; m<=nst;m++)
        {  
            printf("%d",a);
            a--;
        }
        nst--;
        a++;
        printf("\n");
    }
    return 0;
}