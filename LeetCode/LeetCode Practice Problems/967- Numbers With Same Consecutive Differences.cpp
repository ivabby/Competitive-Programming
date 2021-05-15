class Solution {
public:
    vector<int> ans;
    
    void find(int cur,int k,int n,int prev) {
        if(n == 0) {
            ans.push_back(cur);
        } else {
            int next = prev - k;
            
            if(next >= 0) {
                find(cur * 10 + next,k,n - 1,next);
            }
            
            next = k + prev;
            if(next < 10 && k != 0) {
                find(cur * 10 + next,k,n - 1,next);
            }
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        for(int i=1;i<=9;i++) 
            find(i,k,n - 1,i);
        
        return ans;
        
    }
};
