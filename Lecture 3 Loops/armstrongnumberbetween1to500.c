#include <Stdio.h>
int main ()
{   
    int num,sum,count=1,ld;
    while(count<=500){
        num=count;
        sum=0;
        while(num!=0){
            ld=num%10;
            sum=sum+ld*ld*ld;

            num=num/10;
        }
        if(count==sum){
            printf("%d is the armstrong number.\n",count);
        }
        count++;
    }
    return 0;

}
