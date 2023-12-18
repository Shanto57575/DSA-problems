// https://leetcode.com/problems/binary-search/description/

class Solution {
public:
    int search(vector<int>& a, int target) {
        int n = a.size();
        int low = 0;
        int high = n - 1;

        while(low<=high)
        {
            int mid = (low+high)/2;
            if(a[mid]==target)return mid;
            else if(a[mid]<target) low = mid + 1;
            else high = mid - 1;
        }

        return -1;
    }
};

// using Recursive function

int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; //Base case.

    // Perform the steps:
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

