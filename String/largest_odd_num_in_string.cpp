// https://leetcode.com/problems/largest-odd-number-in-string/description/

class Solution {
public:
    string largestOddNumber(string s) {
        
        int n = s.size();

        for(int i=n-1; i>=0; i--)
        {
            if((s[i] - '0') % 2)return s.substr(0, i + 1);
        }

        return "";
    }
};
