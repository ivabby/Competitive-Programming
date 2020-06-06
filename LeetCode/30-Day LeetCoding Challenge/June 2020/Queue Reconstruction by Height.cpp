class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& a) {
        
        sort(a.begin() , a.end() , [&](vector<int> b,vector<int> c){
            return (b[0] > c[0] || (b[0] == c[0] && b[1] < c[1]));
        });
        vector<vector<int>> v;
        
        for(vector<int> i : a)
            v.insert(v.begin() + i[1] , i);
        return v;
    }
};
