// https://www.codingninjas.com/studio/problems/ninja-and-flip-game_1232645?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_recursion_roadmap&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

// tc --> O(N^2)
// sc --> O(N)

#include <bits/stdc++.h> 
bool canNinjaWin(string& s) {
   int n = s.size();

   if(n < 2)return false;

   for(int i = 0; i < n - 1; i++)
   {
      if(s[i]=='$' && s[i+1]=='$')
      {
        string updated_string = s.substr(0, i) + "**" + s.substr(i+2);
        if(!canNinjaWin(updated_string))
           return true;
      }
   }

   return false;
}
