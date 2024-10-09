#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> arr;

    cout << "Enter size of array: ";
    cin >> n;

    // Input the array elements
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // 1) Finding the pivot index
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            idx = i;
            break;
        }
    }

    // If no pivot is present, it means the array is in descending order
    // So reverse the entire array to get the smallest permutation
    if (idx == -1) {
        reverse(arr.begin(), arr.end());
    } else {
        // 2) Reverse the part of the array after the pivot index
        reverse(arr.begin() + idx + 1, arr.end());

        // 3) Find the smallest element greater than arr[idx]
        int j = idx + 1;
        for (int i = idx + 1; i < n; i++) {
            if (arr[i] > arr[idx] && arr[i] <= arr[j]) {
                j = i;
            }
        }

        // 4) Swap the pivot with the smallest element found
        swap(arr[idx], arr[j]);

        // Reverse the part of the array after the original pivot index
        reverse(arr.begin() + idx + 1, arr.end());
    }

    // Printing the next permutation
    cout << "Next permutation is: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
