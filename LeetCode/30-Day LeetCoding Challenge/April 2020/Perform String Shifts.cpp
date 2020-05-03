class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int k = 0 , n = s.length();
        for(auto i : shift)
        {
            if(i[0] == 0)
                k = (k + i[1]%n)%n;
            else
                k = (k + (n-i[1]%n))%n;
        }
        
        string ans = "";
        for(int i=0;i<n;i++)
            ans = ans + s[(i+k)%n];
        
        return ans;
    }
};
