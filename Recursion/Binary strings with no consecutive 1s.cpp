// https://www.codingninjas.com/studio/problems/binary-strings-with-no-consecutive-1s_893001?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_recursion_roadmap&leftPanelTabValue=PROBLEM&count=25&search=&sort_entity=order&sort_order=ASC

// Time Complexity: O(2^N)
// Space Complexity: O(2^N X N)

void solve(vector<string> &v, string s, int n)
{
   if(n==0)
   {
      v.push_back(s);
   }
   else if(s.back()=='1')
   {
      solve(v, s + '0', n-1);
   }
   else
   {
     solve(v, s + '0', n-1);
     solve(v, s + '1', n-1);
   }
}
vector<string>generateString(int N) {
   vector<string>v;
   string s;
   solve(v, s, N);
   return v;
}
