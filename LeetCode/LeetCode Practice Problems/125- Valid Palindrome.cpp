class Solution {
public:
    void increment(int& low,int& high){
        low++;
        high--;
    }
    
    bool isAlphaNum(char c){
        return (isdigit(c) || isalpha(c));
    }
    bool isPalindrome(string s) {
        if(s.length() == 0)
            return true;
        int low = 0 , high = s.length() - 1;
        
        while(low < high){
            if(s[low] == s[high])
            {
                increment(low,high);
                continue;
            }
            
            if(tolower(s[low]) == s[high] || s[low] == tolower(s[high]))
            {
                increment(low , high);
                continue;
            }
            
            if(!isAlphaNum(s[low]))
            {
                low++;
                continue;
            }
            else if(!isAlphaNum(s[high]))
            {
                high--;
                continue;
            }
            
            return false;
        }
        
        return true;
    }
};
