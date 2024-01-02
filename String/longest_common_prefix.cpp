// https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        sort(strs.begin(),strs.end()); // they are sorted lexicongraphically

    /*
        The solution first sorts the input vector of strings using the sort() 
        function from the library. Sorting the array arranges the strings 
        lexicographically so that the first and last strings will have the 
        most dissimilar characters. This is because the common prefix must
        be shared among all strings in the input, and so the first and last 
        strings must share the most characters in common
    */

        string first = strs[0], second = strs[strs.size()-1];
        
        for(int i=0; i<min(first.size(),second.size()); i++)
        {
            if(first[i]!=second[i])break;
            ans += first[i];
        }

        return ans;

    }
};

