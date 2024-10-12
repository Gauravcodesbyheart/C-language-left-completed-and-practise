#include <stdio.h>
#include <limits.h>
int main ()
{   
    int arr[6]={1,2,3,4,5,6};
    int max=INT_MIN; 
    int smax=INT_MIN;
    for(int i=0; i<=5;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(int j=0;j<=5;j++)
    {
        if (max!=arr[j] && smax<arr[j])
        {
            smax=arr[j];
        }
    }
    printf("The second greatest element in the given array is %d",smax);
    return 0;
}