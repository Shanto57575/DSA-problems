// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {

        int low = 0;
        int high = a.size() - 1;
        int first = -1;
        int last = -1;

        while(low<=high)
        {
           int mid = (low + high) / 2;
           
           if(a[mid] == target)
           {
              first = mid;
              high = mid - 1; 
           }
           else if(a[mid] < target)
           {
               low = mid + 1;
           }
           else high = mid - 1; 
        }

        low = 0;
        high = a.size() - 1;

        while(low<=high)
        {
           int mid = (low + high) / 2;
           
           if(a[mid] == target)
           {
              last = mid;
              low = mid + 1;
           }
           else if(a[mid] < target)
           {
               low = mid + 1;
           }
           else high = mid - 1; 
        }
        
        if(first==-1)return {-1, -1};

        return {first, last};
    }
};
