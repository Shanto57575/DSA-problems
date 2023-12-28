// https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {

        int n = a.size();

        if(n == 1 || a[0] != a[1]) return a[0];
        if(a[n-1] != a[n-2]) return a[n-1];

        int left = 1; 
        int right = n - 2;

        while(left <= right)
        {
           int mid = left + ((right - left) / 2); // considering overflow
           
           if(a[mid] != a[mid+1] && a[mid] != a[mid-1])return a[mid]; 

           int leftSize;

           if(a[mid] == a[mid-1]) leftSize = mid - 1;
           else leftSize = mid; 

           /* if(a[mid] == a[mid-1]) then it is not single 
              element thats why trim down one more index
              in the left 
            */
        
           if(leftSize % 2) right =  mid - 1;
           else left = mid + 1; 

           /* if odd check in the left side.....because 
              even means couple of elemnts odd means 
              there must be a single a element 
            */
        }

        return -1;
    }
};
