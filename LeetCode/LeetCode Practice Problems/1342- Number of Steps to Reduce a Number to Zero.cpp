class Solution {
public:
    int numberOfSteps (int num) {
        int ans = 0;
        while(num > 0)
        {
            if(num&1)
            {
                ans++;
                num--;
            }
            if(num > 0)
            {
                ans++;
                num/=2;
            }
        }
        return ans;
    }
};
