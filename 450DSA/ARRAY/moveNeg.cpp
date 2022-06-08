// Move all negative elements to end
// Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

// Example 1:
// Input : 
// N = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output : 
// 1  3  2  11  6  -1  -7  -5

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>vec;
for (int i = 0; i < n; i++)
{
    if (arr[i]>=0)
    {
        vec.push_back(arr[i]);
    }
}
for (int i = 0; i < n; i++)
{
    if (arr[i]<0)
    {
        vec.push_back(arr[i]);
    }
} 
for (int i = 0; i < vec.size(); i++)
{
    arr[i] = vec[i];
}
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends