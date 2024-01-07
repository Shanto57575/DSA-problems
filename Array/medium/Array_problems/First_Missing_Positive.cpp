// https://leetcode.com/problems/first-missing-positive/description/

class Solution {
public:
    int firstMissingPositive(vector<int>& a) {

    int n = a.size();
    int j = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>0) // positive or neg i will continue
        {
            swap(a[i],a[j]); // if anything postive found it will swap with i
            j++; // positive value till j;
        }
    }

    for(int i=0; i<j; i++)
    {
      int val = abs(a[i]);
      if((val - 1)<j && a[val-1]>0)
      {
          a[val-1] = -a[val-1];
      }
    }

    for(int i=0; i<j; i++)
    {
        if(a[i]>0)return i+1;
    }
    
    return j+1;

  }
};
