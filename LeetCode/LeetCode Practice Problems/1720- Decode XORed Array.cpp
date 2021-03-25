class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> a;
        a.push_back(first);
        
        int prev = first;
        for(int i=0;i<encoded.size();i++) {
            prev = prev ^ encoded[i];
            a.push_back(prev);
        }
        
        return a;
    }
};
