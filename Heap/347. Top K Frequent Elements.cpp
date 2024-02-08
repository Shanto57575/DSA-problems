// https://leetcode.com/problems/top-k-frequent-elements/description/

bool sortBySec(const pair<int,int>&a, const pair<int,int>&b)
{
    return a.second < b.second;
}

class Solution {
public:
    vector<int>topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int i:nums)
           mp[i]++;

        vector<pair<int,int>>v;

        for(auto i:mp)
        {
           v.push_back({i.first, i.second});
        }
        
        sort(v.rbegin(), v.rend(), sortBySec);
        
        vector<int>v2;

        for(int i=0; i<k; i++)
        {
           v2.push_back(v[i].first);
        }     

        return v2;
    }
};
