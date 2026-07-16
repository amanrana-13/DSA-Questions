// Question - 14. Longest Common Prefix
// Question Link - https://leetcode.com/problems/longest-common-prefix/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string firstStr = strs[0];
        string lastStr = strs[n - 1];
        vector<char> first(firstStr.begin(), firstStr.end());
        vector<char> last(lastStr.begin(), lastStr.end());
        string result = "";
        int minLength = min(first.size(), last.size());
        for (int i = 0; i < minLength; i++)
        {
            if (first[i] == last[i])
            {
                result += first[i];
            }
            else
                break;
        }
        return result;
    }
};

// Time Complexity - O(n log n)
// Space Complexity - O(M) M - maximum length of the strings in the input vector

// Question - 242. Valid Anagram
// Question Link - https://leetcode.com/problems/longest-common-prefix/description/
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        unordered_map<char, int> charCounts;
        for (char c : s)
        {
            charCounts[c]++;
        }
        for (char c : t)
        {
            if (charCounts.find(c) == charCounts.end() || charCounts[c] == 0)
            {
                return false;
            }
            charCounts[c]--;
        }
        return true;
    }
};

// Time Complexity - O(N) N- length of the string
// Space Complexity - O(N)