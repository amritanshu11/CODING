// Given an array Arr[] of N integers. Find the contiguous sub-array
//(containing at least one number) which has the maximum sum and return its sum.
// Example 1:
// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.
// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
         int pt1=0;
        int sum = 0;
        int max_sum = INT_MIN;
        while(pt1<n)
        {
             sum = sum + arr[pt1];
             if (sum < 0)
             {
                sum = 0;
             }
             max_sum = max(max_sum,sum);
             pt1++;
        }
         if(max_sum == 0){
             return *max_element(arr, arr + n);
         }
        return max_sum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends