#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector<int> &v, int x)
{
    int n = v.size();
    int flag = 0, position;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            position = i + 1;
            cout << "position :" << position;
            flag = 1;
            break;
        }
    }

    cout << "element not found!!";
    return position;
}
int main()
{
    vector<int> v;
    int n, x;
    cout << "enter number of elements:";
    cin >> n;
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "enter the element to be found:";
    cin >> x;

    linear_search(v, x);
}