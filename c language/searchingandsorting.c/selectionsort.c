#include<stdio.h>
void selection_sort(int a[],int n){
    int  i, j, temp;
     // Selection sort algorithm
    for (i = 0; i < n - 1; i++) {
        int min = i;  // Assume the current index as minimum

        // Find the index of the minimum element in the remaining unsorted array
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        // Swap the current element with the minimum element found
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

}

int main() {
    int n, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];

    // Input elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", &a[i]);
    }

    selection_sort(a,n);
    // Output the sorted array
    printf("Sorted array is : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
} 
