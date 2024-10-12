#include <stdio.h>
int main ()
{
    int cp,sp;
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter the selling price:");
    scanf("%d",&sp);
    if (sp>cp){
        printf("profit");
    }
    else if(cp>sp){
        printf("loss");
    }
    else{
        printf("Neither profit nor loss");
    }
    return 0;
}