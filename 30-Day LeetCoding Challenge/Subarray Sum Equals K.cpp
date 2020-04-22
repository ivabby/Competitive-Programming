class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n = a.size();
        map<int,int> m;
        
        int s = 0;
        for(int i=0;i<n;i++)
        {
            s = s + a[i];
            m[s]++;
        }
        
        int cnt = 0 ;
        s = 0;
        for(int i=0;i<n;i++)
        {
            cnt += m[k];
            k = k + a[i];
            s = s + a[i];
            if(m[s])
                m[s]--;
        }
        
        return cnt;
    }
};
