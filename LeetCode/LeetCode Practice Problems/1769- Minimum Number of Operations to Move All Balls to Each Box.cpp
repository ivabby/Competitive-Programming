class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++) {
            int cnt = 0;
            for(int j=0;j<n;j++) { 
                if(i == j || boxes[j] == '0') continue;
                cnt += abs(j-i);
            }
            
            ans[i] = cnt;
        }
        
        return ans;
    }
};
