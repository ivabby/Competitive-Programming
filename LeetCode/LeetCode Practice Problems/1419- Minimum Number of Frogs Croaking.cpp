class Solution {
public:
    int minNumberOfFrogs(string s) {
        map<char , int> m;
        int mini = 0;
        for(char c : s)
        {
            if(c == 'c')
            {
                m[c]++;
                mini = max(mini , m[c]);
            }
            else if(c == 'r')
            {
                if(m['c'] == 0)
                    return -1;
                m[c]++;
            }
            else if(c == 'o')
            {
                if(m['c'] == 0 || m['r'] == 0)
                    return -1;
                m[c]++;
            }
            else if(c == 'a')
            {
                if(m['c'] == 0 || m['r'] == 0 || m['o'] == 0)
                    return -1;
                m[c]++;
            }
            else
            {
                if(m['c'] == 0 || m['r'] == 0 || m['o'] == 0 || m['a'] == 0)
                    return -1;
                m['c']--;
                m['r']--;
                m['o']--;
                m['a']--;
            }
        }
        
         if(m['c'] != 0 || m['r'] != 0 || m['o'] != 0 || m['a'] != 0)
                    return -1;
        
        return mini;
    }
};
