// https://leetcode.com/problems/reverse-string/description/

class Solution {
public:
    void reverseString(vector<char>& s) {
        return helper(s, 0 ,s.size()-1);
    }
private:
    void helper(vector<char>&s, int i, int j)
    {
        if(i > j)return;
        swap(s[i], s[j]);
        helper(s, i+1, j-1);
    }
};
