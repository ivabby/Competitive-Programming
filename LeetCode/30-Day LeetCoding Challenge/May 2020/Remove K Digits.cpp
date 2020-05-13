class Solution {
public:
    
    string removeKdigits(string num, int k) {
        int n = num.length();
        if(n == k || n == 0)
            return "0";
        
        vector<char> v;
        int i = 0;
        
        while(i < n)
        {
            int sz = v.size();
            while(k && sz && v[sz-1] > num[i])
            {
                v.pop_back();
                k--;
                sz = v.size();
            }
            
            v.push_back(num[i]);
            i++;
        }
        
        while(k--)
            v.pop_back();
        
        string s = "";
        n = v.size();
        while(!v.empty())
        {
            s = v[n-1] + s;
            n--;
            v.pop_back();
        }
        
        while(s.size() > 1 && s[0] == '0')
            s = s.substr(1);
        
        return s;
    }
};
