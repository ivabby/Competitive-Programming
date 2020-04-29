class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> last(26);
        
        for(int i=0;i<S.length();i++)
        {
            char c = S[i];
            last[c-'a'] = i;
        }
        vector<int> ans;
        int maxPos = 0;
        int prev = -1;
        for(int i=0;i<S.length();i++)
        {
            char c = S[i];
            maxPos = max(maxPos , last[c-'a']);
            if(maxPos == i)
            {
                ans.push_back(i-prev);
                prev = i;
            }
        }
        
        return ans;
    }
};
