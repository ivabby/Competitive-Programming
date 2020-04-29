class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> m;
        for(char i : S)
            m[i]++;
        
        int ans = 0;
        for(char c : J)
            ans+=m[c];
        
        return ans;
    }
};
