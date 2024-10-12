#include <stdio.h>
int main ()
{
    int r1,r2,c1,c2,i,j;
    printf("Enter the number of rows in matrix 1:");
    scanf("%d",&r1);
    printf("Enter the number of rows in matrix 2:");
    scanf("%d",&r2);
    printf("Enter the number of columns in matrix 1:");
    scanf("%d",&c1);
    printf("Enter the number of columns in matrix 2:");
    scanf("%d",&c2);
    int arr[r1][c1];
    int brr[r2][c2];
    if (r1==r2 && c1==c2)
    {
        printf("The addition of the given matrices is possible:\nPlease enter the elements of matrix 1 firstly\n");
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("Enter the  matrix 1's arr[%d][%d] element\n",i,j);
                scanf("%d",&arr[i][j]);
            }
            printf("\n");
        }
        printf("Enter the element of matrix 2");
        for (i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("Enter the  matrix 2's arr[%d][%d] element\n",i,j);
                scanf("%d",&brr[i][j]);
            }
            printf("\n");
        }
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf(" %d ",arr[i][j] + brr[i][j]);

            }
            printf("\n");
        }
    }
    else 
    {
        printf("The matrix addition is not possible:");
    }
    return 0;
}