// //Sort an array of 0s, 1s and 2s
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
// Example 1:

// Input:
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated
// into ascending order.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        map<int ,int>mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int x = mp.find(0)->second;
        int y = mp.find(1)->second;
        int z = mp.find(2)->second;
        for (int i = 0; i < n; i++)
        {
             if (i<x)
             {
                a[i] = 0;
             }
             else if (i>=x && i<y+x)
             {
                 a[i] = 1;
             }
             else if(i>=y+x)
             {
                 a[i] = 2;
             }
             
             
        }
    }
};

// { Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends