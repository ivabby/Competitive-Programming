class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int n = s.length();
        
        bool f[n];
        
        for(int i=0;i<n;i++) {
            f[i] = false;
        }
        
        for(int i=0;i<n;i++) {
            char c = s[i];
            if(c == '(') {
                st.push(i);
            }
            else if(c == ')') {
                if(!st.empty()) {
                    int top = st.top();
                    st.pop();
                    f[top] = true;
                    f[i] = true;
                }
            }
            else {
                f[i] = true;
            }
        }
        string ans = "";
        for(int i=0;i<n;i++) {
            if(f[i])
                ans += s[i];
        }
        
        return ans;
    }
};
