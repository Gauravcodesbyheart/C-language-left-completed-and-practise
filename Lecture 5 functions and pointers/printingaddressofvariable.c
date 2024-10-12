#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("%p",&n);
    int a;
    printf('Enter the second number:\n');
    scanf("%d",&a);
    int *x=&a;
    printf("%p",x);   // by doing this we can avoid writing & with printf function as we already made x    
                        //  variable as pointer

    return 0;
}