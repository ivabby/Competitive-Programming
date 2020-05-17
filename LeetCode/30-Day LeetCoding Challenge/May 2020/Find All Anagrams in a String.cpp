class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int f1[26] = {0} , f2[26] = {0};
        vector<int> a;
        for(char i : p)
            f1[i - 'a']++;
        
        int n1 = s.length() , n2 = p.length();
        if(n2 > n1)
            return a;
        int i = 0 , j = 0;
        
        for(;j<n2-1;j++)
            f2[s[j] - 'a']++;
        
        while(j<n1)
        {
            f2[s[j] - 'a']++;
            j++;
            bool f = true;
            for(int i=0;i<26;i++)
                if(f1[i] != f2[i])
                    f = false;
            
            if(f) a.push_back(i);
            f2[s[i] - 'a']--;
            i++;
        }
        
        return a;
    }
};
