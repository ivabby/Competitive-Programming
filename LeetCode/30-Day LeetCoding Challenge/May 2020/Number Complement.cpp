class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        long cnt = 1;
        
        while(num)
        {
            int v = num%2;
            if(v == 0)
                ans = ans + cnt;
            
            num /= 2;
            cnt = cnt * 2;
        }
        
        return ans;
    }
};
