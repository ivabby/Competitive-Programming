class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string rev = "";
        for(int i=0;i<s.length();i++)
            rev = s[i] + rev;
        if(s == rev) return true;
        return false;
    }
};
