#include <stdio.h>
int main ()
{
    int l,b,p,a;
    printf("Enter the Length of rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);
    p = 2*(l+b);
    a = l*b;
    printf("The area of rectangle is %d\n",a);
    printf("The area of rectangle is %d\n",p);
    if (p>a){
        printf("The perimeter is rectangle than the area of rectangle");
    }
    else if (a>p) {
        printf("The area of the rectangle is greater than the perimeter of rectangle");
    }
    else{
        printf("The area and perimeter both are same for this dimension of ractangle");
    }
    return 0; 
    
}