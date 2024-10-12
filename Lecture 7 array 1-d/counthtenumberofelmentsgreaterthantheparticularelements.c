
// count the number of element greater than 3 int the given array 
#include <stdio.h>
int main ()
{
    int arr[5]={1,2,3,4,5};
    int count=0;
    for(int i=0;i<=4;i++)
    {
        if (arr[i]>3)
        count=count+1;
    }
    printf("The %d elements are greater than 3",count);
    return 0;
}