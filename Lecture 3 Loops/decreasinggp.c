//  100 50 25 12.5 ........
#include <stdio.h>
int main ()
{   
    int n;
    printf("Enter the number you want");
    scanf("%d",&n);
    printf("The numbers from 100 to %d th term are---",n);
    float a=100;
    for (int i=1; i<n; i++){
        printf(" %.2f ",a);
        a=a*0.5;
    }
    // return 0;


}