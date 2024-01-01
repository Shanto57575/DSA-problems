// https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans;
        int n = s.size();
        int open = 0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='('){
               if(open > 0) {
                   ans += s[i];
               }
               open++;
            }
            else if(s[i]==')'){
                if(open > 1){ // check if there is opening bracket
                    ans += s[i];
                }
                open--;
            }
        }

        return ans;
    }
};

// using stack 

class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans;
        int n = s.size();
        stack<char>st;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='('){
               if(st.size() > 0) {
                   ans += s[i];
               }
               st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.size() > 1){ // check if there is opening bracket
                    ans += s[i];
                }
                st.pop();
            }
        }

        return ans;
    }
};
