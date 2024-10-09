#include <stdio.h>
void insert(int a[], int n, int pos, int num) {
    for (int i = n; i > pos - 1; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = num;
}
void deleteElement(int a[], int n, int pos) {
    for (int i = pos; i < n; i++) {
        a[i - 1] = a[i];
    }
}
void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
int main() {
    int a[100], n, i, ch, pos, num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (1) {
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter position: ");
                scanf("%d", &pos);
                printf("Enter element: ");
                scanf("%d", &num);
                insert(a, n, pos, num);
                n++;
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);
                deleteElement(a, n, pos);
                n--;
                break;

            case 3:
                display(a, n);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid input. Try again.\n");
        }
    }
    return 0;
}