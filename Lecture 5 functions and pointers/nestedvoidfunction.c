#include <stdio.h>
void england()
{
    printf("Hello! You are in England\n");
    return ;
}
void australia()
{
    printf("Hello! You are in australia\n");
    england();
    return ;
}
void india()
{
    printf("Hello! You are in India\n");
    australia();
    return ;
}

int main ()
{   
    india();
    return 0;

}