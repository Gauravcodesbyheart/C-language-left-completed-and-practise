#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the first side of traingle:");
    scanf("%d",&a);
    printf("Enter the first side of traingle:");
    scanf("%d",&b);
    printf("Enter the first side of traingle:");
    scanf("%d",&c);
    if (a+b>c && b+c>a && a+c>b ){
        printf("The given dimenmsions can form the traingle");
    }
    return 0;
}