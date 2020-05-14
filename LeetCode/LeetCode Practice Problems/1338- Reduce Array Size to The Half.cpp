class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> m;
        for(auto i : arr)
            m[i]++;
        
        vector<int> a;
        for(auto i : m)
            a.push_back(i.second);
        
        sort(a.begin() , a.end() , greater<int>());
        int n = arr.size() , cnt = 0 , v = 0;
        for(auto i : a)
        {
            v++;
            cnt += i;
            if(cnt >= n/2)
                return v;
        }
        
        return 0;
    }
};
