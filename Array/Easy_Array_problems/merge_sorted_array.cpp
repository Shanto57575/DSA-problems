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

