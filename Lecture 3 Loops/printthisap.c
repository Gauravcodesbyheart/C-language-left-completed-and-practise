//  print this ap - 1 3 5 7 9  -- we can solve these types of problems by two methods by using math as well as by using extra variable i used here extra variable 
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number upto which you want to print this ap:");
    scanf("%d",&n);
    printf("The all terms from 1 to %d are -----\n",n);
    int a=1;
    for (int i=1; i<=n; i++){
        printf("%d ",a);
        a=a+2;
    }
    return 0;

}