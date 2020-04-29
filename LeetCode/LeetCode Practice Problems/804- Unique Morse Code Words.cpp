class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<string,int> m;
        string v[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(string s : words)
        {
            string res = "";
            for(char c : s)
            {
                res = res + v[c-'a'];
            }
            m[res]++;
            cout<<res<<" ";
        }
        
        return m.size();
    }
};
