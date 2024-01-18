// https://leetcode.com/problems/reverse-words-in-a-string/description/

/// tc - O(N) && sc -- O(N)
class Solution {
public:
    string reverseWords(string s) {

          vector<string>v;
          string t;

          for(char c : s)
          {
              if(c != 32)
              {
                t += c;
              }
              else if(c==32 && t.size()>0)
              {
                  v.push_back(t); // the
                  t.clear(); // ___ 
              } 
          }

        if (t.size() > 0)
        v.push_back(t);

          t.clear();

          reverse(v.begin(), v.end());

          for(int i=0; i<v.size(); i++)
          {
              t += v[i];
              if(i < v.size()-1)
              t += ' ';
          }   

          return t;          
    }
};

/// tc - O(N) && sc -- O(1)

class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());

        int i = 0; 
        int r = 0;
        int l = 0;
        int n = s.size();

        while(i<n)
        {
            while(i < n && s[i] != ' ')
            {
                s[r] = s[i];
                r++;
                i++;
            }
            
            if(l<r)
            {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }

            i++;
        }

        return s.substr(0, r - 1);
    }
};
