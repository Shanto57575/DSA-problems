// https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int longestSuccessiveElements(vector<int>&a) {
   
   unordered_set<int> st;

   int n = a.size();

   for(int i=0; i<n; i++) st.insert(a[i]);
   
   int longest = 0;

   for(auto it : st)
   {
     int cnt = 0;
     if(st.find(it-1) == st.end())
     {
       cnt++;
       int x = it;
       while(st.find(x+1)!=st.end())
       {
          cnt++;
          x++;//2,3,4,5
       }
       longest = max(longest,cnt);
     }
   }

   return longest;
}
