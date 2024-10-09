#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10];
    int m, n;

    cout << "Enter size of array 1 and array 2: ";
    cin >> m >> n;

    // Ensure the sizes do not exceed the array bounds
    if (m > 10 || n > 10) {
        cout << "Sizes must be <= 10." << endl;
        return 1;
    }

    int res[m + n]; // Dynamic array size for merging

    cout << "Enter elements of array 1: ";
    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter elements of array 2: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    // Merge in reverse order
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            res[k--] = arr1[i--];
        } else {
            res[k--] = arr2[j--];
        }
    }

    // Copy remaining elements of arr1 (if any)
    while (i >= 0) {
        res[k--] = arr1[i--];
    }

    // Copy remaining elements of arr2 (if any)
    while (j >= 0) {
        res[k--] = arr2[j--];
    }

    cout << "Merged sorted array is: ";
    for (int i = 0; i < (m + n); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
