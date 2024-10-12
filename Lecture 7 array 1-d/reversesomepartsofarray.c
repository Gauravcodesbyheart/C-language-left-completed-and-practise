#include <stdio.h>
int main ()
{
    int arr[5]={1,2,3,4,5};
    for (int i=1,j=3; i<=4; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=arr[j];
    }
    for (int i=0; i<=4;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}