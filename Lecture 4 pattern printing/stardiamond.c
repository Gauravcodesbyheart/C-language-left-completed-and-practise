 #include <stdio.h>
 int main ()
 {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n/2+1;
    int ml=n/2+1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=nsp; j++)
        {
            printf(" ");
        }
        if(i<ml)
        {
            nsp--;
        }
        else {
            nsp++;
        }
        for(int k=1; k<=nst; k++)
        {
            printf("*");

        }
        if(i<ml)
        {
            nst=nst+2;
        }
        else
        {
            nst= nst-2;

        }
        printf("\n");
    }
    return 0;
 }