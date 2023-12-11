// https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        for(int i=m; i<nums1.size(); i++){
           nums1[i] += nums2[j];
           j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};


// optimal solution

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n -1;

        while(m>0 && n>0)
        {
            if(nums1[m-1] <= nums2[n-1])
            {
               nums1[last] = nums2[n-1];
               last--;
               n--;
            }
            else{
                nums1[last] = nums1[m-1];
                last--;
                m--;
            }
        }
        
        while(n>0)
        {
            nums1[last] = nums2[n-1];
            n--;
            last--;
        }
    }
};
