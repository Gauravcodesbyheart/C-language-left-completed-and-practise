#include <stdio.h>
int main ()
{  
    int arr[5];
    for (int i=0; i<=4; i++ )
    {
        printf("Enter the element %d of array:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<=4; i++ )
    {
        printf("The element %d of array is %d\n",i+1,arr[i]);
        
    }
    return 0;
}