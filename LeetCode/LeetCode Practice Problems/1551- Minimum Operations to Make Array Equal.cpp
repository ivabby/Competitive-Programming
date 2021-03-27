class Solution {
public:
    int minOperations(int n) {
        if(n == 1) {
            return 0;
        }
        
        int start = 1;
        int mid = 0;
        int ans = 0;
        int i = 0 , last = n - 1;
        while(i < last) {
            ans += (n - start);
            i++;
            last--;
            start += 2;
        }
        
        return ans;
        
    }
};
