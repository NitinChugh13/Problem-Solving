#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int> v1;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // Initialize v1 with the same size as v
    v1.resize(n);

    // Copy elements from v to v1 in reverse order
    for (int i = 0; i < n; i++) {
        v1[i] = v[n - 1 - i];
    }

    // Print the reversed vector
    cout << "New array is: ";
    for (int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
