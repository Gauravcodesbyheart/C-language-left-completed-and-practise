#include <stdio.h>
int main ()
{   
    int x;
    printf("\nEnter the number:");
    scanf("%d",&x);
    if(x%5==0){
        printf("\nThe inputted nnumber %d is divisible by 5",x);
    }
    else{
        printf("\nThe inputted number %d is not divisible by 5",x);
    }
    return 0;
}