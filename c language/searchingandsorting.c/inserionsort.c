#include <stdio.h>
void insertionSort(int a[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    printf("Sorted array is: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

