class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int n = pushed.size();
        int m = popped.size();
        int j = 0;
        for(int i=0;i<n;i++) {
            while(!st.empty() && popped[j] == st.top()) {
                st.pop();
                j++;
            }
            
            st.push(pushed[i]);
        }
        
        while(!st.empty() && popped[j] == st.top()) {
                st.pop();
                j++;
        }
        
        return j==m;
    }
};
