#include <stdio.h>
int main ()
{   
    int evensum=0;
    int oddsum=0;
    int arr[8] = {1,2,3,4,5,6,7,8};
    for (int i=0; i<=7; i++)
    {
        if (i%2==0)
        {
            evensum=evensum+arr[i];
        }
        else
        {
             oddsum=oddsum+arr[i];

        }

    } 
    printf("The difference between sum of even indices and odd indices is %d",oddsum=evensum);
    return 0;
}