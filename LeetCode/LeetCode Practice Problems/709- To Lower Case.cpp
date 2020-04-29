class Solution {
public:
    string toLowerCase(string str) {
        string s = "";
        for(char c : str){
            if(c>='A' && c<='Z')
                c = (char)((c-'A')+'a');
            
            s = s + c;
        }
        
        return s;
    }
};
