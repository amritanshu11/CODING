// Given an array Arr of size N containing positive integers.
// Count number of smaller elements on right side of each array.
// N = 7
// Arr[] = {12, 1, 2, 3, 0, 11, 4}
// Output: 6 1 1 1 0 1 0
// Explanation: There are 6 elements right
// after 12. There are 1 element right after
// 1. And so on.
// Expected Time Complexity: O(N*logN)
// Expected Auxiliary Space: O(N)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> s;
    int countSmaller[n];
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(arr[i]);
        auto it = s.lower_bound(arr[i]);
        countSmaller[i] = distance(s.begin(), it);
    }

    for (int i = 0; i < n; i++)
        cout << countSmaller[i] << " ";

    return 0;
}