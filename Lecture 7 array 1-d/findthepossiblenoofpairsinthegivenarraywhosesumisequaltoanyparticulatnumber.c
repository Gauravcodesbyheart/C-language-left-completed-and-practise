// find  out the toal no. of possible pairs whose sum give the value 8
#include <stdio.h>
int main ()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0; i<=7;i++)
    {
        for(int j=i+1;j<=7;j++)
        {
            if (arr[i]+arr[j]==8)
            count=count+1;
        }
    }
    printf("The total no. of possible pairs are %d",count);
    return 0;
}