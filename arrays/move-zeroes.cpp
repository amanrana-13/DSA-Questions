// Question 1
// Question Link - https://leetcode.com/problems/move-zeroes/description/
// Question Name - Move Zeroes

#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    void moveZeroes(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (arr[j] == 0)
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};

// Time Complexity = O(n)
// Space Complexity = O(1)

// Question 2 
// Question Link - https://leetcode.com/problems/rotate-array/description/
// Question Name - Rotate Arrays

#include <iostream>
#include <vector>
#include <algorithm>
class Solution
{
public:
    void rotate(std::vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        std::rotate(nums.begin(), nums.begin() + n - k, nums.end());
    }
};

// Time Complexity - O(n)
// Space Complexity - O(1)