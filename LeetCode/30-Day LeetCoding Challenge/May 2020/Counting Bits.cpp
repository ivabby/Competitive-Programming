class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        
        if(num >= 0)
            ans.push_back(0);
        if(num >= 1)
            ans.push_back(1);
        
        int prev = 2 , next = 4;
        for(int i=2;i<=num;i++)
        {
            if(i == next)
            {
                ans.push_back(1);
                prev = next;
                next = next << 1;
            }
            else{
                ans.push_back(1 + ans[i - prev]);
            }
        }
        
        return ans;
    }
};
