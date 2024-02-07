// https://leetcode.com/problems/sort-characters-by-frequency/description/?envType=daily-question&envId=2024-02-07

// tc --> O(n + mlogm) --> n for building map for iterating thorugh the string + mlogm for making priority queue with m unique elements
// sc --> O(n+m) --> map + priority_queue

class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> mp;

        for(char c:s)
        {
           mp[c]++;
        }

        priority_queue<pair<int, char>> pq;
        
        for(auto i:mp)
        {
           pq.push({i.second, i.first});
        }
      
        s.clear();
      
        while(!pq.empty())
        {
          s += string(pq.top().first, pq.top().second);
          pq.pop();
        }
        
        return s;

    }
};
