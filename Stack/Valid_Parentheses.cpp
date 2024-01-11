// https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {

        stack<char>st;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
            else{
               if(st.empty()) return false;
               else if(s[i]==')'&& st.top()!='(') return false;
               else if(s[i]=='}'&& st.top()!='{') return false;
               else if(s[i]==']'&& st.top()!='[') return false;
               else st.pop();
            }
        }

        if(!st.empty())return false;
        return true;
    }
};

/*
TC --> O(N)
SC --> O(N) --> STACK
*/
