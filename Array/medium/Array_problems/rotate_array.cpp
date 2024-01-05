// https://leetcode.com/problems/rotate-array/description/

// Tc --> O(N), Sc --> O(N)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int>v(n);

        int j = 0;

        for(int i=0; i<n; i++)
        {
           if(i + k < n) 
            v[i+k] = nums[i];
           else
            v[(i+k)%n] = nums[i];
              
        }
        nums = v;
    }
};

// Tc --> O(N), Sc --> O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int sz = k % nums.size() ;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+sz);
    reverse(nums.begin()+sz, nums.end());
}
};

