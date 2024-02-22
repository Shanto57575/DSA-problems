// https://www.codingninjas.com/studio/problems/remove-consecutive-duplicates_893195?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_recursion_roadmap&leftPanelTabValue=PROBLEM&count=25&page=1&search=&sort_entity=order&sort_order=ASC

// tc --> O(N)
// sc --> O(N)

void helper(string &s, string &t, int i, int n)
{
    if(i==n)return;
    if(s[i]!=s[i+1]) t += s[i];
    helper(s, t, i+1, n);
}

string removeDuplicate(string &s)
{
   string t;
   int n = s.size();
   helper(s, t, 0, n);
   return t;
}
