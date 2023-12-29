// https://leetcode.com/problems/find-peak-element/description/
/*
            .           . 6
            .         . 5 
            .       . 4
            .     . 3        
            .   . 2          
            . . 1            
            .........................................
            
            monotonicaaly increasing so the more we go right it will 
            increase so a peak will be in right side even when threre
            is a diff suddenly it decrease it will be eventually greater
            so it will be a peak so thats why we will search in right side
                                   &
            similarly when monotonically decrease we will search left side
*/


class Solution {
public:
    int findPeakElement(vector<int>& a) {
        
        int n = a.size();

        if(n == 1) return 0;
        if(a[0] > a[1]) return 0;
        if(a[n-1] > a[n-2]) return n-1;
        
        int low = 1; int high = n - 1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;
        
            if(a[mid] > a[mid-1] && a[mid] > a[mid+1])return mid;

            else if(a[mid] > a[mid-1]) {
                low = mid + 1;
            }
            else if(a[mid] < a[mid-1]) {
                high = mid - 1;
            }
        }

        return -1;
    }
};
