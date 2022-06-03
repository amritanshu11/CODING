// Given an unsorted integer array nums, return the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

// Example 1:

// Input: nums = [1,2,0]
// Output: 3

#include <bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int> &vec, int n){
 int N  =100000;
int ans;
int idx[N];
for (int i = 1; i < N; i++)
{
    idx[i] = 0;
}
for (int i = 0; i < n; i++)
{
    if (vec[i]<0)
    {
        continue;
    }
    idx[vec[i]]++;
}
for (int i = 1; i < N; i++)
{
    if (idx[i] == 0)
    {
      ans =i;
      break;
    }
}
return ans;
} 
int main(){
int n;
cin>>n;
vector<int>vec(n);
for (int i = 0; i <n ; i++)
{
    cin>>vec[i];
}
cout<<MissingNumber(vec,n);

 
return 0;
}