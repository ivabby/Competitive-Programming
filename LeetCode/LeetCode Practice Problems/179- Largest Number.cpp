class Solution {
public:
    
    static bool compare(string i,string j)
    {
        return (i+j) > (j+i);
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        
        for(auto i : nums)
            a.push_back(to_string(i));
        
        sort(a.begin() , a.end() , compare);
        
        string ans = "";
        for(auto i : a)
            ans = ans + i;
        
        if(ans[0] == '0')
            ans = "0";
        
        return ans;
    }
};
