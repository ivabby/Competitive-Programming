class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(char c : address){
            if(c == '.')
                ans = ans + "[.]";
            else
                ans = ans + c;
        }
        
        return ans;
    }
};
