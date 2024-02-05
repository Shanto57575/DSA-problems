// https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=daily-question&envId=2024-02-05

class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char,int>mp;

        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                mp[s[i]] = -1;
            }
            else
            {
                mp[s[i]] = i;
            }
        }
        
        int first_Occur = INT_MAX;
        bool f = 0;
        for(auto i : mp)
        {
            if(i.second<first_Occur && i.second!= -1)
            {
               first_Occur = i.second;
               f = 1;
            }
        }
        return f ? first_Occur : -1;
    }
};
