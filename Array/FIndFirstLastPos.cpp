// Find First and Last Position of Element in Sorted Array
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// M-I(BINEARY SEARCH)
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
    vector<int>ans;
    int front = 0;
    int back = n - 1;
    while (front < back)
    {
        int mid = (front +back)/2;
       
         if (arr[mid] == target)
        {
           int i = mid,j=mid;
           while (i>=0 && arr[i]== target)
           {
               i--;
           }
            while (j<n && arr[j]== target)
           {
               j++;
           }
           ans.push_back(i+1);
           ans.push_back(j-1);
           
        }

        if(target < arr[mid]) {
            back = mid-1;
        } else {
            front = mid+1;
        }
        
        
    }
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    

    return 0;
}

// // M-II
// #include <bits/stdc++.h>
// using namespace std;

// void findFirstAndLast(int arr[], int n, int x)
// {
// 	int first, last;
// 	// to store first occurrence
// 	first = lower_bound(arr, arr + n, x) - arr;
// 	// to store last occurrence
// 	last = upper_bound(arr, arr + n, x) - arr - 1;

// 	if (first == n) {
// 		first = -1;
// 		last = -1;
// 	}
// 	cout << "First Occurrence = " << first
// 		<< "\nLast Occurrence = " << last;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
// 	int n = sizeof(arr) / sizeof(int);
// 	int x = 8;
// 	findFirstAndLast(arr, n, x);
// 	return 0;
// }


