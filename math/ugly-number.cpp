// Question Link - https://leetcode.com/problems/ugly-number/description/?envType=problem-list-v2&envId=math
// Question Name - Ugly Number
class Solution {
    public:
        bool isUgly(int n) {
            if (n < 1) {
                return false;
            }
            while (n > 1) {
                if (n % 2 == 0) {
                    n /= 2;
                }
                else if (n % 3 == 0) {
                    n /= 3;
                }
                else if (n % 5 == 0) {
                    n /= 5;
                } 
                else {
                    return false;
                }
            }
            return true;
        }
    };


// Time Complexity = O(log n)
// Space Complexity = O(1)
