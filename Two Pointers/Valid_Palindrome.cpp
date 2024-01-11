// https://leetcode.com/problems/valid-palindrome/description/

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;

        while(i < j)
        {
           s[i] = tolower(s[i]);
           s[j] = tolower(s[j]);
           if(s[i] != s[j])
           {
              if(!isalnum(s[i])) i++;
              else if(!isalnum(s[j]))j--;
              else return false;
           }
           else {
               i++;
               j--;
           }
        }
        return true;
    }
};
