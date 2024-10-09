#include <stdio.h>//matrix multiplication

int main() {
    int r, c, m, n, i, j, k;
    printf("Enter the number of rows for the 1st matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns for the 1st matrix: ");
    scanf("%d", &c);
    printf("Enter the number of rows for the 2nd matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for the 2nd matrix: ");
    scanf("%d", &n);

    int arr[r][c];
    int brr[m][n];
        // Input for the 1st matrix
    printf("Enter elements of the 1st matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter the element (%d,%d) of the 1st matrix: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Input for the 2nd matrix
    printf("Enter elements of the 2nd matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the element (%d,%d) of the 2nd matrix: ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }

    // Matrix multiplication
    int res[r][n];
    if (c != m) {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

        for (i = 0; i < r; i++) {
            for (j = 0; j < n; j++) {
                res[i][j] = 0;
                for (k = 0; k < m; k++) {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
    

    // Printing the result matrix
    printf("Result of matrix multiplication:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

