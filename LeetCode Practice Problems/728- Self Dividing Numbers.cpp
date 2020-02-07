class Solution {
public:
    bool check(int n)
    {
        string s = to_string(n);
        for(char c : s)
            if(c == '0' || n%(c-'0') != 0)
                return false;
        
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            if(check(i))
                ans.push_back(i);
        }
        
        return ans;
    }
};
