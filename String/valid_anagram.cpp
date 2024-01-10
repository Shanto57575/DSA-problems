// https://leetcode.com/problems/valid-anagram/description/?source=submission-ac
// tc -> O(n),
// sc -> O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;

        unordered_map<char,int>st;

        for(int i=0; i<s.size(); i++)
        {
            st[s[i]]++; //count
            st[t[i]]--; //if any char of t exists in s it will decrement the count;
        }

        for(auto x : st)
        {
            if(x.second != 0)return false; 
        }
        return true;
    }
};

// tc -> O(N logN),
// sc -> O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
    }
};
