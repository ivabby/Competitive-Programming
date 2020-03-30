class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        for(auto i : arr)
            m[i]++;
        
        int ans = -1;
        for(auto i : m)
            if(i.first == i.second)
                ans = i.first;
        
        return ans;
    }
};
