// Given an array of intervals where intervals[i] = [starti, endi],
// merge all overlapping intervals, and return an array of the non-overlapping
// intervals that cover all the intervals in the input.

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> MergeInterval(vector<vector<int>> &Intervals)
{
    vector<vector<int>> ans;
    sort(Intervals.begin(), Intervals.end());
    ans.push_back(Intervals[0]);
    for (int i = 1; i < Intervals.size(); i++)
    {
        if (Intervals[i][0] <= ans.back()[1])
        {
            ans.back()[1] = max(Intervals[i][1], ans.back()[1]);
        }
        else
        {
            ans.push_back(Intervals[i]);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> Intervals(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            Intervals[i].push_back(x);
            Intervals[i].push_back(y);
        }
        vector<vector<int>> ans = MergeInterval(Intervals);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
        }
    }

    return 0;
}