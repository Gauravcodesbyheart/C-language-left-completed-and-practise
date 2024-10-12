#include <stdio.h>
int main ()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x%2==0){
        printf("The entered number %d is Even number",x);
    }
    else {
        printf("The entered number %d  is Odd number ",x);
    }
    return 0;
}
