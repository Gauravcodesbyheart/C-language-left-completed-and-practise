#include <stdio.h>
int main ()
{   
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n%3==0){
        if (n%5==0){
            printf("The number you entered is divisible by both 5 and 3");
        }
        else {
            printf("The number you entered is not divisible by 5 and 3");
        }
    }
    return 0;
}