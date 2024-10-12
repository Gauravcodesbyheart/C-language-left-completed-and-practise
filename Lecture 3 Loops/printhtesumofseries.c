// 1 - 2 + 3 - 4 + 5 -6 + 7 ......upto n terms
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number upto which you want the sum of the series:");
    scanf("%d",&n);
    for (int i=0; i<=n; i++){
    if (n%2==0){
        printf("The sum of the series is %d",-n/2);
    }
    else{
        printf("The sum of the series is %d",((-n/2)+n));
    }
    }
    return 0;
}