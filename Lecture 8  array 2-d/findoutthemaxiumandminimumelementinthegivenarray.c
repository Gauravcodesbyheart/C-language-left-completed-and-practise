#include <stdio.h>
#include <limits.h>
int main ( )
{      
    int arr[2][2]={{1,2},{3,4}};
    int min=arr[0][0];
    int max=arr[0][0];
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
        printf("\n");
    }
    printf("%d is the maximum valued element of the array\n %d is the least valued element of the given array",max,min);
    return 0;

}