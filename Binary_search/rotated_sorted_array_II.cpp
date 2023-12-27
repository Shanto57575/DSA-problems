// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

class Solution {
public:
    bool search(vector<int>& a, int target) {
        int low = 0;
        int n = a.size();
        int high = n - 1;

        while(low <= high)
        {
            int mid = (low + high)/2;

            if(a[mid]==target)return true;

            // if low,mid,high are same ----> shrink the search space
            if(a[low]==a[mid] && a[mid]==a[high])
            {
                low++;
                high--;
                continue;
            }

            // check if left side sorted
            else if(a[low] <= a[mid])
            {
                if(target >= a[low] && target <= a[mid])
                    high = mid - 1;
                else 
                    low = mid + 1;
            }
            // check if right side sorted
            else
            {
              if(target >= a[mid] && target <= a[high])
                low = mid + 1;
               else 
                 high = mid - 1;
            }
        }
        return false;
    }
};
