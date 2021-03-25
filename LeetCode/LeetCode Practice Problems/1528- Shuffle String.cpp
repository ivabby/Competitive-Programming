class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string a = s;
        int j = 0;
        for(auto i: indices) {
            a[i] = s[j];
            j++;
        }
        
        return a;
    }
};
