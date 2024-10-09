#include <stdio.h>//transpose and symmetricity
int main()
{
    int r, c, i, j, flag = 0;
    printf("enter the number of rows: ");
    scanf("%d", &r);
    printf("enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    int brr[c][r];
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
    } // transpose
    printf("the transposed matrix is: ");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            // printf("%d ",arr[j][i]);
            brr[i][j] = arr[j][i];
        }
        printf("\n");
    }
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    if (r == c)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (arr[i][j] != brr[i][j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("matrix is not symmetric");
                break;
            }
        }
        if (flag == 0)
            printf("matrix is symmetric");
    }

    else
    {
        printf("it is not a square matrix");
    }
    return 0;
}
