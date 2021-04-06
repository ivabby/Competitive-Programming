class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> s;
        int n = word.length();
        
        for(int i=0;i<n;i++) {
            if(word[i]>='0' && word[i]<='9') {
                string num = "";
                
                while(i<n && word[i]=='0') i++;
                
                while(i<n && word[i]>='0' && word[i]<='9') {
                    num += word[i];
                    i++;
                }
                if(num == "") s.insert("0");
                else s.insert(num);
            }
        }
        
        return s.size();
    }
};
