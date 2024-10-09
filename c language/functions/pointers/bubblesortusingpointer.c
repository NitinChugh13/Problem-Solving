#include <stdio.h>

// Function to perform bubble sort using pointers
void bubbleSort(int *arr, int n) {
    int i, j, temp;
    int *ptr1, *ptr2;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            ptr1 = arr + j;
            ptr2 = arr + j + 1;

            if (*ptr1 > *ptr2) {
                // Swap the values pointed to by ptr1 and ptr2
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the %d element of array",i+1);
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
