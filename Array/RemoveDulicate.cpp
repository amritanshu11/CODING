// Remove Duplicates from Sorted Array
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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]]++;
        }
    }
    for (auto i : mp)
    {
        cout << i.first << " ";
    }

    return 0;
}