// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maximum = INT_MIN;
        long long sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(sum<0)sum = 0;
            sum+=nums[i];
            maximum = max(maximum, sum);
        }
        return maximum;
    }
};

// Follow uo question : if we want to know the which subarray guves the maximum  number
  long long maximum = INT_MIN;
  long long sum = 0;
  int firstIndex = -1, lastIndex = -1;
  int start;

  for (int i = 0; i < nums.size(); i++)
  {
    if (sum < 0)
    {
      sum = 0;
      start = i;
    }
    sum += nums[i];
    if (sum > maximum)
    {
      maximum = sum;
      firstIndex = start;
      lastIndex = i;
    }
  }

