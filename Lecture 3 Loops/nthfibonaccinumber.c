#include <stdio.h>
int main ()
{   
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    int t1=0;
    int t2=1;
    int sum=1;
    for (i=0; i<n-1; i++)
    {
      t1=t2;
      t2=sum;
      sum=t1+t2; 
    }
    printf("The %dth term of the fibonacci series is %d",n,t1);
    return 0;
}