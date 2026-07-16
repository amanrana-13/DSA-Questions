// Question 1
// Question Link - https://leetcode.com/problems/two-sum/description/
// Question Name - Two Sum

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (nums[i] + nums[j] == target) {
                        return {i, j};
                    }
                }
            }
            return {};
        }
    };

// Time Complexity - O(n^2)
// Space Complexity - O(1)



// Question 2
// Question Link - https://leetcode.com/problems/sort-colors/description/
// Question Name - Sort Colors

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
};

// Time Complexity - O(n^2)
// Space Complexity - O(1)