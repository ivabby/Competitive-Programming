class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int shift = 0;
        
        for(int i=shifts.size()-1;i>=0;i--) {
            shift = (shift + shifts[i])%26;
            int pos = s[i] - 'a';
            pos = (pos + shift)%26;
            
            s[i] = (char)(pos + 'a');
        }
        
        return s;
    }
};
