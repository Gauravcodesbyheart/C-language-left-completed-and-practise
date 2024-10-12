#include <Stdio.h>
int main ()
{
    float r;
    printf("Enter the radius of cicle:\n");
    scanf("%f\n",&r);
    float a = 3.14*r*r;
    printf("The area of the circle is %f\n",a);
    return 0;
}