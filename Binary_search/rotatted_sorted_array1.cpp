// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    int search(vector<int>& a, int target) { 
        
        int low = 0;
        int high = a.size() - 1;
        
        while(low <= high)
        {
           int mid = (low + high)/2;
           if(a[mid] == target) return mid;
           //check if left side sorted
           if(a[low] <= a[mid])
           {
               if(target >= a[low] && target <= a[mid])
                    high = mid - 1; // eliminate right side
               else 
                  low = mid + 1; // eliminate left side
           }
           //check if right side sorted
           else
           {
              if(target >= a[mid] && target <= a[high])
                    low = mid + 1; // eliminate left side
               else 
                   high = mid - 1; // eliminate right side
           }
        }

        return -1;
    }
};
