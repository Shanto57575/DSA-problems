// https://leetcode.com/problems/sort-colors/description/

// brute force 
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
               if(nums[i]>nums[j])
               swap(nums[i],nums[j]);
            }
        }
    }
};

// better approach
class Solution{
public:
    void sortColors(vector<int>& nums) {
       int cnt1,cnt2,cnt3, n = nums.size();
       cnt1 = cnt2 = cnt3 = 0;

       for(int i : nums)
       {
          if(i == 0)cnt1++;
          else if(i==1)cnt2++;
          else cnt3++;
       }
    
       for(int i=0; i<cnt1; i++) nums[i] = 0;
       for(int i=cnt1; i<cnt1+cnt2; i++) nums[i] = 1;
       for(int i=cnt1+cnt2; i<n; i++) nums[i] = 2;
    }
};

// optimal approach
class Solution{
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();
       int low = 0, mid = 0, high = n - 1;

       while(mid <= high)
       {
          if(nums[mid]==0)
          {
              swap(nums[low],nums[mid]);
              low++;
              mid++;
          }
          else if(nums[mid]==1) mid++;
          else{
              swap(nums[mid],nums[high]);
              high--;
          }
       }

    }
};
