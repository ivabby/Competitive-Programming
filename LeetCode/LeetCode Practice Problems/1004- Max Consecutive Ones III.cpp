class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int cnt = 0;
        int n = a.size();
        int i = 0 , ans = 0;
        
        for(int j=0;j<n;j++) {
            if(a[j] == 0) cnt++;
                
            while(cnt > k) {
                if(a[i] == 0) cnt--;
                i++;
            }
            
            ans = max(ans , j-i+1);
        }
        
        return ans;
    }
};
