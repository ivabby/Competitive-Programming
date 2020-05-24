class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int> ans;
        if(num >= 0)
            ans.push_back(0);
        if(num >= 1)
            ans.push_back(1);
        if(num >= 2)
            ans.push_back(1);
        long prev = 2;
        long next = 4;
        for(int i=3;i<=num;i++)
        {
            if(next == i)
            {
                prev = next;
                next = next<<1;
                ans.push_back(1);
            }
            else
            {
                long v = ans[prev] + ans[i - prev];
                ans.push_back(v);
            }
        }
        
        return ans;
        
    }
};
