#include <stdio.h>
#include <limits.h>
int main ()
{
    int arr[5]={1,2,3,45,67};
    int max=INT_MIN;
    for (int i=0; i<=4;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }

    }
    printf("%d is the maximum valued among all elements\n",max);
    return 0;
}