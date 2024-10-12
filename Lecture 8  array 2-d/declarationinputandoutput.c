#include <stdio.h>
int main ()
{
    int row,column;
    printf("Enter the number of rows you want:\n");
    scanf("%d",&row);
    printf("Enter the number of columns you want:\n");
    scanf("%d",&column);
    int arr[row] [column];
    for (int i=0; i<row;i++)
    {
        for (int j=0; j<column; j++)
        {
            printf("Enter the arr[%d][%d] of the array\n",i,j);
            scanf("%d",&arr[i][j]);

        }
        printf("\n");
    }
    printf("THe elements of the given array are ---\n");
    for (int i=0; i<row;i++)
    {
        for (int j=0; j<column; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
    


}

