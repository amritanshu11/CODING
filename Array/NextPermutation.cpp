// Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers. If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.

// Example 1:

// Input: N = 6
// arr = {1, 2, 3, 6, 5, 4}
// Output: {1, 2, 4, 3, 5, 6}
// Explaination: The next permutation of the 
// given array is {1, 2, 4, 3, 5, 6}.

#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int idx = -1;
for (int i = n-1; i >=0; i--)
{
    if (arr[i] > arr[i-1])
    {
        idx = i;
        break;
    }
}
if (idx == -1)
{
    reverse(arr,arr+n);
}
else
{
    int prev = idx;
    for (int i = idx+1; i < n; i++)
    {
      if (arr[i] > arr[idx-1] && arr[i] <= arr[prev])
      {
          prev = i;
      }
      
    }
    swap(arr[idx-1],arr[prev]);
    reverse(arr + idx,arr+n);
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}






return 0;
}