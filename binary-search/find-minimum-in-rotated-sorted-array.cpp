// Question - 153 - Find Minimum in Rotated Sorted Array
// Question Link - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = INT_MAX;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[low] <= nums[mid])
            {
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else
            {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};

// Time Complexity - O(log n)
// Space Complexity - O(1)

// Question - 33. Search in Rotated Sorted Array
// Question Link - https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

// Time Complexity - O(n)
// Space Complexity - O(1)
