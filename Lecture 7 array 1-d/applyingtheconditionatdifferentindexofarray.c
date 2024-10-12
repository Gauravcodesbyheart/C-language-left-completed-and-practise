//given an array of integers change the value of all odd indexe delement to its second multiple and increment all even indexed value by 10 
#include <stdio.h>
int main ()
{
    int arr[5]= {1,2,3,4,5};
    for (int i=0; i<=4; i++)
    {
        if (arr[i]%2==0)
        {
            arr[i]+10;
            
        }
        else 
        {
            arr[i]*2;
        }
    }
    for (int i=0; i<=4; i++)
    {
        prinrtf("%d\n",arr[i]);
    }
return 0;
} 