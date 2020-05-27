class Solution {
public:
    int findMaxLength(vector<int>& a) {
        map<int,int> m;
        int cnt = 0 , ans = 0;
        m[0] = -1;
        for(int i=0;i<a.size();i++)
        {
            cnt = (a[i] == 1)?cnt+1:cnt-1;
            if(m.find(cnt) != m.end())
            {
                ans = max(ans , i - m[cnt]);
            }
            else{
                m[cnt] = i;
            }
        }
        
        return ans;
    }
};
