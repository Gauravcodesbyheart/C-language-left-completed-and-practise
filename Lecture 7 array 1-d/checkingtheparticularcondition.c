// given an array contain the marks of some students check if marks is less than 35 then printf it
#include <stdio.h>
int main ()
{
    int arr [10]= {12,23,34,45,56,78,90,21,32,43};
    for (int i=0; i<=9;i++)
    {
        printf("The %d element of the array is %d\n",i+1,arr[i]);
        if (arr[i]<35)
        {   
            printf("The numbers which are less than 35 are--\n");
            printf("%d\n",arr[i]);
        }
    } 
    return 0;
}