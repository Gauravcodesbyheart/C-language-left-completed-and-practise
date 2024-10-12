#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter x1");
    scanf("%d",&x1);
    printf("Enter x2");
    scanf("%d",&x2);
    printf("Enter x3");
    scanf("%d",&x3);
    printf("Enter y1");
    scanf("%d",&y1);
    printf("Enter y2");
    scanf("%d",&y2);
    printf("Enter y3");
    scanf("%d",&y3);
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if (m1==m2){
        printf("They form a line");
    }
    else{
        printf("They don't form a line");
    }
    return 0;
}