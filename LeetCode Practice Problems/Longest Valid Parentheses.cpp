class Solution {
public:
    int longestValidParentheses(string s) {
        int maxi = 0;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if(!st.empty())
                {
                    int v = st.top();
                    maxi = max(maxi , i-v);
                }
                if(st.empty())
                    st.push(i);
            }
        }
        return maxi;
    }
};
