class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt = 0;
        int i=0,j=s.length()-1;
        
        while(i < j) {
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') cnt++;
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') cnt--;
            i++;
            j--;
        }
        
        
        return cnt == 0;

    }
};
