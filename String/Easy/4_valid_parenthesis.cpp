//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(' or s[i] == '{' or s[i] == '[') {
                // cout<<s[i]<<" ";
                st.push(s[i]);
            }else {
                switch(s[i]) {
                        
                {
                    case ')' :
                        if(!st.empty() and st.top() == '(') {
                            // cout<<"Yes ";
                            st.pop();
                        }else {
                            // cout<<"NO "<<endl;
                            return false;
                        }
                        break;
                    
                    case '}' :
                        if(!st.empty() and  st.top() == '{') {
                            st.pop();
                        }else {
                            return false;
                        }
                        break;
                    
                    case ']' :
                        if(!st.empty() and st.top() == '[') {
                            st.pop();
                        }else {
                            return false;
                        }
                        break;
                }
                
            }
        }
        }
        
        if(st.empty()) {
            return true;
        }else {
            return false;
        }
    
    }
};
