#include <stdio.h>
void tower(int n, char s, char h, char d)
{
    if (n==0) return ;
    tower(n-1,s,d,h);
    printf("%c----%c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
    int main ()
{
    int n;
    char A,B,C;
    printf("Enter the no. of discs you want to keep in the source rod:");
    scanf("%d",&n);
    tower(n,'a','b','c');
    return 0;
}