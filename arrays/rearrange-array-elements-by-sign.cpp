// Question 1 
// Question Link - https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// Question Name - Rearrange Array Elements by Sign
#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n = nums.size();
            vector<int> answer(n,0);
            int posInd = 0;
            int negInd = 1;
            for(int i =0;i<n;i++){
                if(nums[i] >=0){
                    answer[posInd] = nums[i];
                    posInd += 2;
                }
                else {
                    answer[negInd] = nums[i];
                    negInd += 2;
                }
            }
            return answer;
        }
    };

// Time Complexity - O(n)
// Space Complexity - O(n)


// Question 2
// Question Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Question Name - Best Time to Buy and Sell Stock

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];
        for (int i = 1; i < n; i++)
        {
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};

// Time Complexity - O(n)
// Space Complexity - O(1)