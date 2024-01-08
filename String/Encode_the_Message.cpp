// https://www.codingninjas.com/studio/problems/encode-the-message_699836?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
string encode(string &a)
{
    int cnt = 0; 
    string s = "";
    for (int i = 0; i < a.size(); i++)
    {
      if (i + 1 <= a.size() - 1 && a[i] == a[i + 1])
         cnt++;
      else
      {
        cnt++;
        s += a[i];
        s += to_string(cnt);
        cnt = 0;
      }
    }

    return s;
}
