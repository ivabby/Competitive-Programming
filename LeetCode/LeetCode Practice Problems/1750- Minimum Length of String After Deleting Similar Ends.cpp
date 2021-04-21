class Solution {
public:
    int minimumLength(string s) {
        int start = 0 , end = s.length() - 1;
        
        while(start < end && s[start] == s[end]) {
            while(start+1 <= end && s[start+1] == s[start]) start++;
            while(end-1 >= start && s[end-1] == s[end]) end--;
            
            start++;
            end--;
        }
        
        if(start > end) return 0;
        return end-start+1;
    }
};
