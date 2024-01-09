// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/

class Solution {
public:
    int minAddToMakeValid(string s) {

        int left = 0;
        int right = 0;

        for(char c : s)
        {
            if(c == '(') left++;
            else if(c == ')' && left > 0) left--;
            else right++;
        }

        return left + right;

        // TC --> O(N)
        // Sc --> O(1)
    }
};
