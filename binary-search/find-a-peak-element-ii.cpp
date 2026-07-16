// Question - 1901. Find a Peak Element II
// Question Link - https://leetcode.com/problems/find-a-peak-element-ii/description/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxIndex(vector<vector<int>> &mat, int m, int n, int col)
    {
        int MaxValue = -1;
        int Index = -1;
        for (int i = 0; i < m; i++)
        {
            if (mat[i][col] > MaxValue)
            {
                MaxValue = mat[i][col];
                Index = i;
            }
        }
        return Index;
    }
    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int maxRowIndex = findMaxIndex(mat, m, n, mid);
            int left = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
            int right = mid + 1 < n ? mat[maxRowIndex][mid + 1] : -1;
            int top = maxRowIndex - 1 >= 0 ? mat[maxRowIndex - 1][mid] : -1;
            int bottom = maxRowIndex + 1 < m ? mat[maxRowIndex + 1][mid] : -1;

            if (mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right &&
                mat[maxRowIndex][mid] > top && mat[maxRowIndex][mid] > bottom)
            {
                return {maxRowIndex, mid};
            }
            else if (mat[maxRowIndex][mid] < left)
            {
                high = mid - 1;
            }
            else if (mat[maxRowIndex][mid] < right)
            {
                low = mid + 1;
            }
            else if (mat[maxRowIndex][mid] < top)
            {
                maxRowIndex = maxRowIndex - 1;
            }
            else
            {
                maxRowIndex = maxRowIndex + 1;
            }
        }
        return {-1, -1};
    }
};

// Time Complexity - O(m log n )
// Space Complexity - O(1)

// // Question - Median in a row-wise sorted Matrix
// Question Link - https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

class Solution
{
public:
    int median(vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ls;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ls.push_back(mat[i][j]);
            }
        }
        sort(ls.begin(), ls.end());
        return ls[(n * m) / 2];
    }
};

// Time Complexity - O(m*n log(m * n))
// Space Complexity - O(m * n)
