class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<pair<int,int>> st;
        
        int n = T.size();
        vector<int> ans(n,0);
        
        for(int i=n-1;i>=0;i--) {
            while(!st.empty() && st.top().first <= T[i]) {
                st.pop();
            }
            
            if(!st.empty()) {
                int pos = st.top().second;
                ans[i] = pos-i;
            }
            st.push({T[i] , i});
        }
        
        return ans;
        
    }
};
