// https://www.codingninjas.com/studio/problems/first-non-repeating-character_920324?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  unordered_map<char,int>mp;

  for(int i=0; i<str.size(); i++)mp[str[i]]++;
  
  for(char c : str)
  {
    if(mp.find(c)!=mp.end() && mp[c]==1)return c;
  }

  return str[0];
}
