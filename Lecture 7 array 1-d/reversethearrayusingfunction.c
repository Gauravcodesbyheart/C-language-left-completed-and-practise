#include <stdio.h>
void reverse (int arr[] , int si, int ei)
{
    for (int i=si,j=ei; i<j; i++,j--)
    {
        int temp =arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
    }
    return ;
}
int main ()
{
    int arr[7]={1,2,3,4,5,6,7};
    int si;
    printf("Enter the starting index from which you want to reverse the array\n");
    scanf("%d",&si);
    int ei;
    printf("Enter the starting index from which you want to reverse the array\n");
    scanf("%d",&ei);
    reverse (arr,si,ei);
    for (int i=0; i<=6;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}