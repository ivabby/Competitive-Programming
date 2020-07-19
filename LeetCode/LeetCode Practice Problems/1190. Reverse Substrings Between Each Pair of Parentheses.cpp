class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char> st;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] != ')')
                st.push(s[i]);
            else
            {
                string a = "";
                while(st.top() != '(')
                {
                    a = a + st.top();
                    st.pop();
                }
                
                st.pop();
                for(auto i : a)
                    st.push(i);
            }
        }
        
        string ans = "";
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        
        return ans;
    }
};
