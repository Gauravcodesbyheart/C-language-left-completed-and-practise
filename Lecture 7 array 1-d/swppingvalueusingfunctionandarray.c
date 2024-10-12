#include <stdio.h>
void fun(int x[])
{
    int temp=x[0];
    x[0]=x[1];
    x[1]= temp;
    return ;

}
int main ()
{
    int arr[2]={1,2};
    printf("%d is the first element and %d is the second element\n",arr[0],arr[1]);
    fun (arr);
    printf("%d is the first element and %d is the second element",arr[0],arr[1]);
    return 0;
}