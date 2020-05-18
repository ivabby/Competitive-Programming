class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        
        if(n1 > n2)
            return false;
        
        int f1[26] = {0} , f2[26] = {0};
        for(char c : s1)
            f1[c - 'a']++;
        
        int i = 0 , j = 0;
        while(j < n1 - 1)
        {
            f2[s2[j] - 'a']++;
            j++;
        }
        
        while(j < n2)
        {
            f2[s2[j] - 'a']++;
            j++;
            
            bool f = true;
            for(int i=0;i<26;i++)
                if(f1[i] != f2[i])
                {
                    f = false;
                    break;
                }
            if(f) return true;
            
            f2[s2[i] - 'a']--;
            i++;
        }
        
        return false;
    }
};
