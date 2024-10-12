#include <stdio.h>
int main ()
{
    int r,s,a;
    printf("Enter the age of Ram:");
    scanf("%d",&r);
    printf("Enter the age of Shyam:");
    scanf("%d",&s);
    printf("Enter the age of Ajay:");
    scanf("%d",&a);
    if (r>s){
        if (s>a){
            printf("Ajay is youngest among three");
        }
        else{
            printf("Shyam is youngest among three");
        }
    }
    else{
        if (r>a){
            printf("Ajay is youngest among three");
        }
        else{
            printf("Ram is youngest among three");
        }
        return 0;
    }
    
}