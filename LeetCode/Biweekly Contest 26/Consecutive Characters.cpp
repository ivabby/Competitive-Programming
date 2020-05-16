class Solution {
public:
    int maxPower(string s) {
        int maxi = 1 , cur = 1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i] == s[i-1])
            {
                cur++;
                maxi = max(maxi , cur);
            }
            else
                cur = 1;
        }
        
        return maxi;
    }
};
