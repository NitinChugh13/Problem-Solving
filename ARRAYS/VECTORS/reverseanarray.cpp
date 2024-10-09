#include <iostream>//without using extra array
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    //  int start=0;
    //  int end=n-1;
    //  //using while loop
    //  while(start<=end){
    //     int temp=v[start];
    //     v[start]=v[end];
    //     v[end]=temp;
    //      start++;
    //      end--;

    //  }
    //using forloop
    for(int i=0,j=n-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    
    // Print the reversed vector
    cout << "New array is: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}   
