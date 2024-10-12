#include <stdio.h>
int main ()
{    
    int i,j;
    int arr[5]={1,2,3,1,5};
    for (i=0; i<=4;i++)
    {
        for ( j=0;j<=4;j++)
        {
            if (arr[i]=arr[j])
            {
            printf("%d repeates in the given array\n",arr[i]);
            break;
            }
        }
    }
    //  printf("%d repeates in the given array\n",arr[i]);
    return 0;
}