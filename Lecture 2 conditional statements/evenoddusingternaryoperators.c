#include <stdio.h>
int main ()
{   int n;
    printf("Enter the number:");
    scanf("%d",&n);
    n%2==0 ? printf("even munber"): printf("odd number");
    return 0;
}