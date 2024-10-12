#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the  first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a>b){
        if (a>c){
            printf("The entered number %d is the greatest among three numbers",a);
        }
        else{
            printf("The entered number %d is the greatest among three number",c);
        }
    }
    else {
        if (b>c){
            printf("The entered number %d is the greatest among three numbers",b);
        }
        else{
            printf("The entered number %d is the greatest among three numbers",c);
        }
    }
    return 0;
}