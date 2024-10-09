#include <stdio.h>
int main()
{
    int r, c,i,j,temp;
    printf("enter the number of rows: ");
    scanf("%d", &r);
    printf("enter the number of columns: ");
    scanf("%d", &c);
   int arr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the element (%d,%d) of matrix : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the matrix is: ");
    printf("\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }//transpose
    for (i = 0; i < c; i++)
    {
        for (j = i; j < r; j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
         
        }
           }
         printf("the transpose is :");
         printf("\n");


           for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}