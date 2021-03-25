class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        for(auto i : items) {
            if(ruleKey == "type" && ruleValue == i[0]) {
                ans++;
            } else if(ruleKey == "color" && ruleValue == i[1]) {
                ans++;
            } else if(ruleKey == "name" && ruleValue == i[2]) {
                ans++;
            }
        }
        
        return ans;
    }
};
