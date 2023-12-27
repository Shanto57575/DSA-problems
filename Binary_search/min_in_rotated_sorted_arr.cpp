// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& a) {

        int l = 0;
        int n = a.size();
        int h = n - 1;

        int ans = INT_MAX;

        while(l <= h)
        {
            int mid = (l + h) / 2;

            ans = min(ans, a[mid]);

            if(a[l] <= a[h])
            {
                ans = min(ans, a[l]);
                break;
            }

            if(a[l] <= a[mid])
            {
                ans = min(ans, a[l]);
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }

        } 
        return ans;
    }
};
