//problem : https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


void rev(int n, vector<int> &v, vector<int> &nums)
{
   if(n==0)return;
   v.push_back(nums[n-1]);
   rev(n-1,v,nums);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
   vector<int>v;
   rev(n,v,nums);
   return v;
}

