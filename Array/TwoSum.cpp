// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  map<int,int>mp;
  for (int i = 0; i < n; i++)
  {
      mp[arr[i]] = i;
  }
  for (int i = 0; i <n ; i++)
  {
      if (mp.find(target - arr[i]) != mp.end())
      {
          if(i != mp.find(target - arr[i])->second){
          cout<<i<<" "<<mp.find(target - arr[i])->second<<endl;
          break;
          }
      }
  }
  
  
    
    
    return 0;
}