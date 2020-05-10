class Solution {
public:
    int findJudge(int N, vector<vector<int>>& a) {
        set<int> s;
        map<int,int> m;
        for(int i=0;i<a.size();i++)
        {
            s.insert(a[i][0]);
            m[a[i][1]]++;
        }
        
        int ans = -1;
        for(int i=1;i<=N;i++)
            if(s.find(i) == s.end() && m[i] == N - 1)
            {
                ans = i;
            }
        
        return ans;
    }
};
