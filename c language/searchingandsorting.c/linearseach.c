#include <stdio.h>

int linear_search(int arr[], int n, int x) {
    int position = -1;  // linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            position = i + 1; 
            printf("Position: %d\n", position);
            return position; 
        }
    }
    printf("Element not found!!\n");
    return position; 
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("Enter the element to be found: ");
    scanf("%d", &x);

    linear_search(arr, n, x); 

    return 0;
}