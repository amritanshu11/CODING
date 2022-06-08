// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(log(n))
// Constraints:
// 1 <= N <= 105
// 1 <= arr[i] <= 105
// 1 <= K <= N

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
int t;
cin>>t;
while (t--)
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    priority_queue<int>qu;
    for (int i = 0; i < n; i++)
    {
        qu.push(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        qu.pop();
    }
    cout<<qu.top();
}

 
return 0;
}