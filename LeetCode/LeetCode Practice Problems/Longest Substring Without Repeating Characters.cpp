class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt = 0 , c = 0;
        set<int> f;
        int j = -1;
        for(int i=0;i<s.length();i++)
        {
            while(j+1<s.length() && f.find(s[j+1]) == f.end())
            {
                j++;
                f.insert(s[j]);
            }
            cnt = max(cnt , j-i+1);
            f.erase(s[i]);
        }
        return cnt;
    }
};
