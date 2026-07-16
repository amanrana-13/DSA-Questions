// Question - 74. Search a 2D Matrix
// Question Link - https://leetcode.com/problems/search-a-2d-matrix/  
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size();
            int n = matrix[0].size();
            for(int i = 0;i<m;i++){
                for(int j = 0;j<n;j++){
                    if(target == matrix[i][j]){
                        return true;
                    }
                }
            }
            return false;
        }
    };

// Time Complexity - O(m * n)
// Space Complexity - O(1)

// Question - 240. Search a 2D Matrix II
// Question Link - https://leetcode.com/problems/search-a-2d-matrix-ii/description/

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size();
            int n = matrix[0].size();
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (target == matrix[i][j]) {
                        return true;
                    }
                }
            }
            return false;
        }
    };

// Time Complexity - O(m*n)
// Space Complexity - O(1)