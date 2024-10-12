#include <stdio.h>
int main ()
{
int arr[9]={1,2,3,4,5,6,7,8,9};
int sum1=0;
for (int i=0; i<=8;i++)
{
    sum1 = sum1+arr[i];
}
int sum2=10*(10+1)/2;
printf("The missing element is %d",sum2-sum1);

return 0;
}