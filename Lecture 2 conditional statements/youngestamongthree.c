#include <stdio.h>
int main ()
{
    int r,s,a;
    printf("\nEnter the age of Ram:");
    scanf("%d",&r);
    printf("\nEnter the age of Shyam:");
    scanf("%d",&s);
    printf("\nEnter the age of Amit:");
    scanf("%d",&a);
    if (r<s && r<a ){
        printf(" Ram is youngest among all three"); 
    }
    if (s<a && s<r ){
        printf("Shyam is youngest among all three"); 
    }
    if (a<s && a<r){
        printf("Amit is youngest among all three"); 
    }
    return 0;
}